# 1-3 Activity: Numeric Overflow Coding

**Michael Wood**  
**SNHU**  
**CS-405 Secure Coding**  
**Instructor: Aaron Demory**  
**Date Due: 07/05/2026**

## Summary of Process

For this activity, I worked with the provided C++ code and added checks to stop numeric overflow and underflow before they could happen. I used `std::numeric_limits` to find the highest and lowest values each data type could hold. Before the program added or subtracted a number, it checked whether the next step would go outside that safe range. When that happened, the function stopped, kept the last safe result, and sent back a true or false value to show whether a problem was detected.

I also changed the test functions, so the console showed the result of each calculation along with whether an overflow or underflow occurred. I tested the program using signed integers, unsigned integers, and floating-point values. The normal tests returned false, and the tests with one extra step returned true. This showed that the program was able to catch the problem before the value wrapped around and gave an incorrect result.

## Issues Encountered and Resolution

The biggest challenge was making one solution work with several different C++ data types. Some of the character types wanted to display as letters instead of numbers, so I kept the unary plus operator in the output to force them to print as numeric values. I also noticed that some floating-point tests left very small values because of rounding. At first, those results looked unusual, but I learned that this is normal behavior with floating-point numbers and does not mean the overflow or underflow check failed.

Once I understood how the different data types behaved, I was able to get the program to run correctly. The final test completed with exit code 0, and the output showed that the unsafe calculations were detected and prevented.

*Figure 1. Numeric overflow test results.*

*Figure 2. Numeric underflow test results and successful program completion.*

> Archive note: This Markdown file was converted from the original Week 1 Word submission so the work can be read directly on GitHub.
