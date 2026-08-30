# Numeric Overflow Activity

## Overview

This activity focused on detecting numeric overflow and underflow before a calculation produces an unsafe or incorrect result.

I modified the provided C++ template functions so the program checks for overflow and underflow before performing addition or subtraction. The solution uses `std::numeric_limits` to determine the maximum, lowest, and signed properties of each data type.

Before each calculation, the program compares the current result with the remaining safe range. If the next operation would exceed that range, the function stops and returns the last safe value along with a Boolean status showing that overflow or underflow was detected.

## Testing

I updated the test functions so the console displays both the numeric result and whether the operation succeeded. The program was tested with:

- Signed integer types
- Unsigned integer types
- Character types
- Floating-point values

The safe test cases completed normally, while the extra addition or subtraction step was detected and prevented from wrapping to an incorrect value.

## Issues Encountered

One challenge was making the same logic work across several C++ data types. Character values also needed to display as numbers instead of characters, so unary plus was used in the output statements.

Floating-point calculations produced very small remaining values because of rounding and precision limits. Those results were expected and did not mean the overflow or underflow checks had failed.

## What I Learned

This activity showed me that a calculation can look simple and still create a security or reliability problem when the value exceeds the range supported by the data type. Checking the range before the calculation is safer than allowing the value to wrap and trying to figure out later why the answer is wrong.

The original Word summary for this activity is also part of my CS-405 course archive.
