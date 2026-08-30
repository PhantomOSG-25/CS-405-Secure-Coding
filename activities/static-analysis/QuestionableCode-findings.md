# QuestionableCode.cpp Findings

The original `QuestionableCode.cpp` source file used for the Module Five static-analysis activity was not present in the files available when this repository archive was assembled, so this document preserves the findings instead of recreating source code that I cannot verify line for line.

## Issues Demonstrated in the Activity

The source intentionally contained several questionable or unsafe patterns, including:

- Endless recursion
- A `noexcept` function that throws
- Returning or exposing a pointer to local data
- An out-of-bounds array write
- Using a vector iterator after `erase`
- Assignment inside an assertion
- A function with side effects inside an assertion
- Boolean/integer comparison problems
- An uninitialized class member
- Possible null-pointer behavior
- A stray-semicolon loop/operator problem
- Shadowed variables
- Unused functions and variables

## Tool Comparison

Visual Studio C++ Code Analysis found five warnings. Cppcheck 2.21.0 reported a broader set of errors, warnings, and style issues.

The activity demonstrated why multiple analysis tools can be useful. They overlap in some areas, but each tool also sees patterns the other may not report.

The original Cppcheck XML report and project configuration are retained with this course archive.
