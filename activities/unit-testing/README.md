# Unit Testing with Google Test

## Overview

I used Google Test to verify numeric input validation for a spray tank level. The allowed range was **0% through 100%**, so the tests included normal input, boundary values, and values that should be rejected.

## Tests

| Test | Type | Expected Result |
|---|---|---|
| 50% | Positive | Accepted |
| 0% | Positive boundary | Accepted |
| 100% | Positive boundary | Accepted |
| -1% | Negative boundary | Rejected |
| 101% | Negative boundary | Rejected |
| 150% | Negative | Rejected |

All six tank-level tests passed. They were added to the existing test project, which finished with **21 tests passed and 0 failed**.

## Why I Used This Example

A tank level is simple enough to understand immediately. A tank can be empty, full, or somewhere between those two points. It cannot be -1% full or 150% full. That made it a good way to demonstrate why a program should validate information before using it.

## What I Learned

The activity showed me why testing only a normal value is not enough. The edges of an allowed range are important because that is where off-by-one mistakes and bad validation often show up. Testing bad values is just as important as proving the program accepts good ones.

`TankLevelValidationTests.cpp` contains the six tests used for the Project Two security presentation.
