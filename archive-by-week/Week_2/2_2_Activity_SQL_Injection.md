# 2-2 Activity: SQL Injection Coding

**Michael Wood**  
**SNHU**  
**CS-405 Secure Coding**  
**Instructor: Aaron Demory**  
**Date Due: 07/12/2026**

## Summary of Process

For this activity, I worked with the provided C++ and SQLite code and added a check to stop a basic SQL injection attack. The program already ran normal database queries, but it also tested fake attacks like `OR 1=1` and `OR 'hi'='hi'`. I changed the `run_query()` function so it checked the SQL statement before allowing it to run.

The program first made a lowercase copy of the query so it could find the word `OR` no matter how it was typed. It then looked at the condition after `OR`, split the values on each side of the equal sign, removed extra spaces, and compared them. If both values matched, the condition would always be true, which meant the query could be an SQL injection attempt. When that happened, the program displayed a warning and stopped the query before it reached the database.

After making the changes, I tested the program in Visual Studio. The normal query returned all four users, and the search for Fred only returned Fred. The five SQL injection attempts were all detected and blocked. The program also finished with exit code 0, so the new check worked without breaking the normal queries.

## Issues Encountered and Resolution

The main problem was making the code detect more than just `1=1`. The assignment explained that an attacker could also use something like `2=2` or matching words inside quotation marks. I solved this by comparing the value on the left side of the equal sign with the value on the right side instead of looking for one exact attack. That allowed the program to catch different versions of the same SQL injection pattern.

*Screenshot of the Application Console Output*

> Archive note: Converted from the original Week 2 Word submission so the work can be read directly on GitHub.
