# C/C++ Secure Coding Standards

The Green Pace security policy uses ten coding standards. Each standard was connected to security principles, a threat level, and automated detection methods.

## STD-001: Use the Correct Data Type

Use a data type that matches the information being stored and is large enough for the expected value. Identification numbers that are not used for calculations may be safer as strings so leading zeros and full values are preserved.

**Priority Level:** 2

## STD-002: Validate Numeric Values Before Use

A number should not be accepted only because it fits the selected data type. The value also has to make sense for the program. A spray tank level, for example, must stay between 0% and 100%.

**Priority Level:** 4

## STD-003: Validate String Length and Range

Programs should verify that text input stays within the expected length and range before using or storing it. This helps prevent bad data and memory-related problems.

**Priority Level:** 4

## STD-004: Prevent SQL Injection

User input should not be combined directly with SQL commands. Prepared statements and bound parameters keep user data separate from the SQL instruction itself.

**Priority Level:** 5

## STD-005: Protect Memory

Dynamic memory should be managed safely. Smart pointers can reduce memory leaks, dangling pointers, and use-after-free problems compared with unmanaged `new` and `delete` operations.

**Priority Level:** 4

## STD-006: Use Assertions Correctly

Assertions should be used for internal conditions that should always be true, not as a replacement for validating user input. Code inside an assertion should not create side effects that disappear when assertions are disabled.

**Priority Level:** 3

## STD-007: Catch Specific Exceptions and Handle Them Safely

Catch the specific errors the program expects and respond safely. Catching every possible exception and ignoring it can hide failures and make troubleshooting harder.

**Priority Level:** 3

## STD-008: Check Numeric Calculations for Overflow and Underflow

Before performing arithmetic, verify that the result can be represented by the selected data type. Do not allow values to wrap around silently.

**Priority Level:** 4

## STD-009: Initialize Variables Before Use

Variables should have a known value before they are read. Uninitialized values can cause unpredictable behavior and may create security or reliability problems.

**Priority Level:** 3

## STD-010: Never Hard-Code Passwords or Security Secrets

Passwords, keys, tokens, and other secrets should not be stored directly in source code. Secrets should be protected and retrieved through an approved secure method.

**Priority Level:** 5

## Priority Order

The final policy ranked the standards using severity, likelihood, remediation cost, and urgency:

- **Level 5:** SQL injection and hard-coded secrets
- **Level 4:** Numeric values, string length, memory protection, and numeric overflow
- **Level 3:** Assertions, exceptions, and variable initialization
- **Level 2:** Data type selection

Lower priority does not mean a standard can be ignored. The ranking simply helps the development team decide which risks should be handled first.
