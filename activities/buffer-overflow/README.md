# Buffer Overflow Activity

## Overview

This activity demonstrated how unsafe input can overflow a fixed-size character array and overwrite nearby memory.

The original program used a 20-character array and accepted input without checking how much data the user entered. That created the possibility of writing beyond the end of the buffer and changing nearby data.

## Submitted Fix

`BufferOverflow.cpp` is the completed source recovered directly from my Week 2 course folder.

I replaced the unsafe input with `std::cin.getline()` and limited the read to the size of the array. Because the array contains 20 characters, the program allows a maximum of 19 entered characters plus the null terminator.

The corrected version also checks whether the input stream failed because the user entered too much data. If that happens, the program:

- Displays an error message
- Clears the failed input state
- Discards the remaining characters from the input stream
- Preserves the account number
- Stops before using unsafe input

## Files

- `BufferOverflow.cpp` is the actual submitted secure solution from my course folder.
- `BufferOverflow_original.cpp` preserves the vulnerable starter example for comparison.
- `BufferOverflow_fixed.cpp` is a cleaned portfolio version of the same secure approach.
- `PythonWithExploit.py` generates the oversized test string that was included with the buffer-overflow course files.
- `PythonWithoutExploit.py` generates normal comparison input.

## What I Learned

This activity made buffer overflow easier for me to understand because the problem was not that the program could not accept text. The problem was that it accepted more data than the memory set aside for that text could safely hold. The fix was to put a hard boundary around the input and reject anything that exceeded it.
