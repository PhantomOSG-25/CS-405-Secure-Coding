# 5-3 Activity: Static Code Analysis

Michael Wood  
SNHU  
CS-405 Secure Coding  
Instructor: Aaron Demory  
Date Due: 08/02/2026

## Visual Studio and Cppcheck Results

For this activity, I used the questionable C++ code in Visual Studio and ran the code analysis without changing anything. Visual Studio found five warnings. These included a function marked `noexcept` that still throws an exception, a Boolean value being compared to the number 3, an uninitialized class variable, an array that could be written outside its limit, and an extra semicolon after a `while` statement.

Next, I checked the same project with Cppcheck using C++17 and all checks turned on. Cppcheck found some of the same problems, but it also found more. These included changing a value inside an assert, calling a function inside an assert, using a pointer to a local variable, possible null pointer access, and using a vector iterator after removing an item.

Some of the problems were real risks because they could cause the program to crash, return the wrong result, or use memory incorrectly. Other messages, such as unused functions or variables, were not direct security risks, but they could still make the code harder to understand and maintain.

Visual Studio gave me a good first look at the code, while Cppcheck dug deeper and found more details. Using both tools gave me a better understanding of what was wrong with the program. I also saved the Cppcheck results as an XML file for the assignment.

## Cppcheck Issues Not Clearly Found by Visual Studio

### RISK: Assignment Inside an Assert
**System:** Cppcheck

The code uses `assert(z = 2)`, which changes the value of z instead of comparing it. Assert statements can be removed from release versions, so this line may not run at all. It should use `assert(z == 2)` instead.

### RISK: Function Called Inside an Assert
**System:** Cppcheck

The program calls `my_function()` inside an assert statement. Since asserts may be removed from release versions, the function may not run. The function should be called first, and the result should be checked separately.

### RISK: Invalid Pointer
**System:** Cppcheck

The program saves the address of a local variable inside a pointer. That local variable disappears when the function ends, which leaves the pointer pointing to invalid memory. The program should use a value that stays valid after the function ends.

### RISK: Possible Null Pointer
**System:** Cppcheck

Cppcheck found that `tok` could be null when the program tries to use `tok->next()`. The pointer should be checked before it is used so the program does not crash.

### RISK: Invalid Vector Iterator
**System:** Cppcheck

The program removes an item from the vector but continues using the same iterator. The iterator may no longer be valid after `erase()` is called. The iterator should be updated with the value returned by `erase()`.

### RISK: Variables With the Same Names
**System:** Cppcheck

Cppcheck found several variables named `a`, `x`, `y`, and `z` that hide other variables with the same names. This can make the code confusing and cause the wrong variable to be used. Using different and clearer names would help prevent mistakes.

### NOT RISK: Functions Could Be Static
**System:** Cppcheck

Cppcheck reported that `DontThrow()` and `Token::next()` could be static because they do not use information from an object. This is mainly a code improvement and not a direct security problem.

### NOT RISK: Smaller Variable Scope
**System:** Cppcheck

Cppcheck reported that the `buf` variable could be placed closer to where it is used. This could make the code easier to follow, but it is not a direct security risk.

### NOT RISK: Unused Code
**System:** Cppcheck

Cppcheck found unused functions, variables, and class members. These do not always create a security problem, but they can make the code harder to understand and may hide other mistakes. Removing unused code would make the program cleaner.

### NOT RISK: Missing Include Messages
**System:** Cppcheck

Cppcheck displayed information messages saying it could not find some standard library headers. The report also explained that these headers were not needed for the analysis to work correctly. These messages were caused by the Cppcheck setup and were not problems with the source code.
