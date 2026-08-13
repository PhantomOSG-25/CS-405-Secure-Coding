# 2-3 Activity: Buffer Overflow Coding

**Michael Wood**  
**SNHU**  
**CS-405 Secure Coding**  
**Instructor: Aaron Demory**  
**Date Due: 07/12/2026**

For this activity, I worked with the provided C++ code to stop buffer overflow from happening. The original program used a character array that could only hold 20 characters, but it did not stop the user from entering more than that. If too much information was entered, it could spill into another part of the program and change the account number.

I changed the input so the program only accepts what the buffer can safely hold. I used `std::cin.getline()` and limited it to the size of the character array. Since one spot is needed for the null character at the end, the user can enter up to 19 characters without causing a problem. I also added a check so the program can tell when the user enters too much information.

If the input is too long, the program shows an error message, clears the failed input, and removes the extra characters. This keeps the extra data from writing outside the buffer. I tested the program with a normal input and then with a long input. The normal input worked, and the long input was blocked. The account number stayed the same both times, which showed that the buffer overflow was prevented.

*Figure 1. Screenshot of acceptable input.*

*Figure 2. Screenshot of unacceptable input and the error message.*

> Archive note: Converted from the original Week 2 Word submission so the work can be read directly on GitHub.
