# Ten Core Security Principles

This milestone established the security principles that later became the foundation of the Green Pace secure development policy.

## 1. Validate Input Data

Any information entered into a program should be checked before the program uses it. This includes making sure the value is the right type, length, and format. Checking input helps stop bad data, mistakes, and possible attacks from reaching the rest of the system.

## 2. Heed Compiler Warnings

Compiler warnings should not be ignored just because the program still runs. A warning may point to unsafe code, a bad conversion, or a memory problem that could cause trouble later. Developers should review and fix warnings before the software is released.

## 3. Architect and Design for Security Policies

Security should be part of the plan from the beginning instead of being added after the program is finished. Developers should think about what information needs protection, who should have access, and what could go wrong. Planning early usually makes the system safer and easier to maintain.

## 4. Keep It Simple

Code should be kept as simple and clear as possible. Complicated code is harder to understand, test, and repair. When the code is easier to follow, developers are more likely to notice mistakes and security problems before they become serious.

## 5. Default Deny

A system should deny access unless permission has clearly been given. Users and programs should not automatically receive access to everything. Starting with no access and only allowing what is needed helps reduce the chance of someone reaching information they should not have.

## 6. Adhere to the Principle of Least Privilege

Users, programs, and employees should only have the access needed to do their jobs. For example, a pest control technician may need access to customer service records but not payroll or company banking information. Limiting access reduces the amount of damage that can happen if an account is misused or compromised.

## 7. Sanitize Data Sent to Other Systems

Data should be checked and cleaned before it is sent to another program, database, or system. Unsafe characters or commands should not be allowed to pass through without being reviewed. This helps prevent problems such as SQL injection and protects the receiving system.

## 8. Practice Defense in Depth

Security should use several layers instead of depending on one control. This could include passwords, access limits, encryption, input validation, logging, and regular updates. If one layer fails, the other layers can still help protect the system.

## 9. Use Effective Quality Assurance Techniques

Software should be tested in more than one way before it is released. Developers should use code reviews, automated tools, test cases, and security testing to find problems. Testing both normal and unusual inputs helps catch issues that may not appear during basic use.

## 10. Adopt a Secure Coding Standard

Developers should follow the same set of secure coding rules across a project or company. These standards give everyone clear guidance on handling input, memory, errors, data, and access. Using the same rules makes the code more consistent and helps prevent known security problems.
