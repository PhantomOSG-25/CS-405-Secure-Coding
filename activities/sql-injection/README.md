# SQL Injection Activity

## Overview

This activity explored how SQL statements can be changed when untrusted input is allowed to become part of the command itself.

The C++ example uses an in-memory SQLite database and deliberately attempts several variations of an injection condition so the problem can be observed during testing.

## Files

- `SQLInjection.cpp` contains the course activity source.
- `PythonWithExploit.py` generates an intentionally oversized/exploit-style test string used during secure-coding exercises.
- `PythonWithoutExploit.py` provides a normal comparison string.

The SQLite implementation files used to compile the activity are third-party dependencies and are not presented as my own source code.

## Secure Coding Connection

The Green Pace security policy later addressed SQL injection with a stronger design: use prepared statements and bind user values as data instead of combining them directly with SQL commands.

The main lesson I took from this work is that checking for a few known attack strings is not enough. The safer approach is to design the query so user input never becomes executable SQL in the first place.
