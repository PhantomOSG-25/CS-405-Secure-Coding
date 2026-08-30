# Static Code Analysis

## Overview

For this activity, I compared the warnings found by Microsoft Visual Studio C++ Code Analysis with the issues reported by Cppcheck 2.21.0 while analyzing `QuestionableCode.cpp`.

The point was not just to collect warnings. It was to see how different automated tools look at the same source code and why using more than one tool can reveal problems a developer may miss during a normal build.

## Visual Studio Results

Visual Studio reported five warnings, including issues involving:

- A `noexcept` function that throws
- Comparing a Boolean value with an integer
- An uninitialized class member
- A possible buffer overrun
- Suspicious loop/operator behavior

## Cppcheck Results

Cppcheck reported additional concerns, including:

- Assignment inside an assertion
- Functions with side effects used inside assertions
- A pointer/reference to local data escaping its safe lifetime
- Boolean/integer mismatches
- Uninitialized members
- Throwing from `noexcept`
- Possible null-pointer behavior
- An invalid vector iterator after `erase`
- Shadowed variables
- Unused functions and variables

## Files

- `CS405_M5_StaticAnalysis.cppcheck` contains the Cppcheck project configuration used during the activity.
- The original Cppcheck XML result report is part of my course archive and records the findings produced by Cppcheck 2.21.0.

## What I Learned

The biggest thing I learned from this activity is that the compiler is only one set of eyes. Visual Studio found real issues, but Cppcheck went further in several areas. Static-analysis tools do not replace the developer, but they can catch patterns that are easy to overlook when reading code manually.

I look at it the same way I use different tools when troubleshooting a problem in the field. One tool may show something another one does not, and comparing the results gives me a better picture of what is actually wrong.
