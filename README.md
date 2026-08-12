# CS-405 Secure Coding

This repository contains my **complete CS-405 Secure Coding portfolio and course archive** from Southern New Hampshire University. I wanted this repository to show more than the two required projects, so it also includes the coding activities, milestones, testing work, static analysis, discussions, journals, and reflections that helped build toward the final security policy.

## Course Focus

Throughout CS-405, I worked with secure coding practices, vulnerability analysis, testing, automation, encryption, access control, risk assessment, and security policy development.

The course helped me understand that code can work correctly and still contain weaknesses. Secure development means checking not only whether the program works, but also how it handles bad input, unexpected conditions, memory use, access, and other security risks.

## Complete Coursework Index

For the full course-by-course archive, see **[COURSEWORK_INDEX.md](COURSEWORK_INDEX.md)**.

### Activities

- [Numeric Overflow](activities/numeric-overflow/)
- [Buffer Overflow](activities/buffer-overflow/)
- [SQL Injection](activities/sql-injection/)
- [Exception Handling](activities/exceptions/)
- [Encryption](activities/encryption/)
- [Static Code Analysis](activities/static-analysis/)
- [Unit Testing](activities/unit-testing/)

### Milestones

- [Ten Core Security Principles](milestones/ten-core-security-principles.md)
- [C/C++ Secure Coding Standards](milestones/cpp-secure-coding-standards.md)

### Projects

- [Project One: Green Pace Secure Development Policy](projects/project-one/)
- [Project Two: Security Policy Presentation](projects/project-two/)
- [Project Two Narration Transcript](projects/project-two/Narration-Script.md)

### Discussions and Reflections

- [Zero Trust Discussion](discussions/zero-trust.md)
- [Module Six: Don't Leave Security to the End](reflections/module-06-dont-leave-security-to-the-end.md)
- [Module Seven: Consider the Motive for the Attack](reflections/module-07-consider-the-motive-for-the-attack.md)
- [Module Eight: Portfolio Reflection](reflections/portfolio-reflection.md)

## Featured Project: Green Pace Security Policy

The main project in this repository is a security policy created for the fictional company **Green Pace**.

The policy applies defense in depth by using multiple layers of protection instead of depending on one security control. It includes:

- Secure coding principles and coding standards
- Threat and risk prioritization
- Input validation
- SQL injection prevention
- Memory protection
- Numeric overflow protection
- Exception handling
- Protection of passwords and secrets
- Encryption for data at rest, in flight, and in use
- Authentication, authorization, and accounting
- Unit testing and automated security analysis
- Logging, monitoring, and continued policy review

## Secure Coding Work

### Numeric Overflow

I worked with C++ numeric limits and added checks for overflow and underflow before performing calculations. This showed me why developers cannot assume that every numeric value will stay within the range supported by a data type.

### Buffer and Input Validation

I corrected unsafe input handling by limiting the amount of data written into a character array and detecting input that exceeded the allowed size. The repository includes both the vulnerable starter code and the secured version so the change can be compared directly.

### SQL Injection

I worked with a C++ and SQLite activity that demonstrated how unsafe SQL can be manipulated. That work later connected to the Green Pace policy requirement to use prepared statements and keep user data separate from SQL commands.

### Exceptions

I tested exception handling and learned how incorrect exception behavior can cause reliability and security problems. Negative testing included verifying an expected `std::length_error` condition.

### Static Code Analysis

I compared **Microsoft Visual Studio C++ Code Analysis** with **Cppcheck 2.21.0**. Visual Studio found five warnings, while Cppcheck reported a broader group of errors, warnings, and style issues.

### Unit Testing

I used **Google Test** to create positive and negative tests for input validation. One example validated a spray tank level that should only accept values from **0% through 100%**.

The tests included:

- 50% as a normal valid value
- 0% as the minimum boundary
- 100% as the maximum boundary
- -1% as an invalid value
- 101% as an invalid value
- 150% as an invalid value

The original Module Four test suite had **15 passing tests**. After adding the six tank-level tests for Project Two, the final test run completed with **21 tests passed and 0 failed**.

## Security Concepts Applied

### Defense in Depth

Security should use multiple layers so that if one control fails, another can still help protect the system.

### Risk Assessment

Not every vulnerability creates the same level of risk. I evaluated issues based on severity, likelihood, difficulty of remediation, and priority so that the most serious problems could be addressed first.

### Encryption

I evaluated protection for information in three states:

- **At rest**: stored information such as databases and backups
- **In flight**: information moving between systems
- **In use**: information actively being processed

### Triple-A Framework

I applied the Triple-A security framework:

- **Authentication** verifies who the user is.
- **Authorization** controls what the user is allowed to access.
- **Accounting** records important user and system activity.

### Zero Trust

Zero trust reinforced the idea that a user, device, or request should not automatically be trusted simply because it is already inside the system. Access should be verified and limited to what is actually needed.

## Tools and Technologies

- C++
- Python
- SQLite
- Microsoft Visual Studio
- Microsoft C++ Code Analysis
- Cppcheck
- Google Test
- GitHub CodeQL concepts
- Clang-Tidy concepts
- Static analysis
- Unit testing
- Secure coding standards
- Vulnerability analysis
- Security policy development
- DevSecOps concepts

## Final Presentation

My final CS-405 presentation explains the Green Pace security policy, coding standards, threat prioritization, encryption strategy, Triple-A framework, unit testing, automation, risks, and recommendations.

**Narrated Security Policy Presentation:**  
https://youtu.be/qfz68uJm49I

## What I Learned

One of the biggest lessons I took from this course is that software security is not a final inspection performed after development is complete. It needs to be part of the entire process.

I relate secure coding to the same troubleshooting process I use in hands-on work: inspect the problem, understand the risk, choose the correct tools, fix the cause instead of only the symptom, test the result, and keep monitoring it.

CS-405 strengthened my understanding of how secure coding standards, automated tools, testing, access control, encryption, and risk assessment work together to produce software that is safer, more reliable, and easier to maintain.

---

**Michael Wood**  
Bachelor of Science in Computer Science  
Southern New Hampshire University
