# Exception Handling Activity

## Overview

This activity focused on testing how C++ code responds when an operation cannot be completed normally.

I worked through the provided `exceptions.cpp` exercise step by step and verified the expected exception behavior with unit testing.

One of the negative tests attempted to reserve a vector capacity larger than `max_size()`. The expected result was a `std::length_error`, and the test succeeded.

## What I Learned

Exception handling should not be used to hide a problem. The program should catch the specific type of failure it expects, respond safely, and give enough information to understand what happened.

This connected directly to the exception standard I later used in the Green Pace security policy: catch specific exceptions and handle them safely instead of using a catch-all handler that ignores the error.

The activity also reinforced the value of negative testing. A program needs to be tested for what happens when something goes wrong, not only when everything goes according to plan.
