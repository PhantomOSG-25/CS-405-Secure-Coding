# SQL Injection Activity

## Overview

This activity explored how SQL statements can be changed when untrusted input is allowed to become part of the command itself.

The C++ example uses an in-memory SQLite database and deliberately attempts several variations of an injection condition so the problem can be observed during testing.

## Submitted Work

`SQLInjection.cpp` is the completed Week 2 source from my course folder. I changed the `run_query()` function so it checks for the always-true `OR` conditions used by the assignment, including examples such as `1=1`, `2=2`, and matching quoted values.

The program lowercases the query, examines the values on both sides of the equal sign, removes spaces, and blocks the query when both sides match. Normal queries still run.

The original activity results showed:

- The normal query returned all four users.
- The search for Fred returned only Fred.
- Five simulated injection attempts were detected and blocked.
- The application finished with exit code 0.

## Dependency Note

The activity uses SQLite. The `sqlite3.c` and `sqlite3.h` files in my local course folder are third-party SQLite source files, so I did not add them to the portfolio as if they were my own work.

## Secure Coding Connection

The Green Pace security policy later addressed SQL injection with a stronger design: use prepared statements and bind user values as data instead of combining them directly with SQL commands.

The main lesson I took from this work is that checking for a few known attack strings is not enough for production software. The safer design is to prevent user input from becoming executable SQL in the first place.
