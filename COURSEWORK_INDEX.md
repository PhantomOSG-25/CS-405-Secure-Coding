# CS-405 Complete Coursework Index

This repository preserves the useful, distinct work from **CS-405 Secure Coding**, not only the two final portfolio projects. I reviewed the course ZIP folders and kept source code, assignment write-ups, testing work, security analysis, milestones, reflections, and project material while leaving out generated build debris and third-party libraries.

## Recovered Course Folder Archive

### Week 1
Location: `archive-by-week/Week_1/`

- 1-3 Activity: Numeric Overflow Coding
- Completed `NumericOverflow.cpp`
- Overflow and underflow checks using `std::numeric_limits`
- Testing across signed, unsigned, character, and floating-point types

### Week 2
Location: `archive-by-week/Week_2/`

- 2-1 Journal: Defense in Depth
- 2-2 Activity: SQL Injection Coding
- 2-3 Activity: Buffer Overflow Coding
- Completed SQL injection and buffer-overflow source
- Buffer-overflow exploit and normal-input Python helpers

### Week 3
Location: `archive-by-week/Week_3/`

- Green Pace Security Policy milestone
- Ten core security principles
- Ten C/C++ coding standards
- Compliant and noncompliant examples
- Foundation for Project One

### Week 4
Location: `archive-by-week/Week_4/`

- 4-1 Activity: Exceptions
- 4-2 Milestone: Unit Testing
- Completed exception-handling source
- Google Test vector tests
- Positive and negative custom tests
- Original milestone result: 15 passed, 0 failed

### Week 5
Location: `archive-by-week/Week_5/`

- 5-1 Case Study: Triple A and Defense in Depth
- 5-2 Activity: Encryption Coding
- 5-3 Activity: Static Code Analysis
- Completed XOR encryption/decryption source
- Visual Studio and Cppcheck comparison
- Original `QuestionableCode.cpp`
- Full Cppcheck findings summary from the saved 2.21.0 XML results

### Week 6
Location: `archive-by-week/Week_6/`

- 6-1 Journal: Don’t Leave Security to the End
- Project One: Green Pace Secure Development Policy
- Security built into the development process
- Risk assessment, encryption, Triple-A, automation, auditing, and policy controls

### Week 7
Location: `archive-by-week/Week_7/`

- 7-1 Journal: Consider the Motive for the Attack
- Project Two narration and presentation work
- Final unit-testing demonstration
- Project Two narrated video linked through YouTube

### Week 8
Location: `archive-by-week/Week_8/`

- 8-2 Journal: Portfolio Reflection
- Zero Trust discussion is preserved under `discussions/`
- Final reflection connects secure development concepts to practical troubleshooting and field experience

## Secure Coding Activities

### Numeric Overflow
Location: `activities/numeric-overflow/`

- Completed `NumericOverflow.cpp`
- Visual Studio project files
- Overflow and underflow detection
- Signed, unsigned, character, and floating-point testing

### Buffer Overflow
Location: `activities/buffer-overflow/`

- Vulnerable starter example
- Completed `BufferOverflow.cpp`
- Secured bounded input
- Exploit-style and normal Python test helpers

### SQL Injection
Location: `activities/sql-injection/`

- Completed `SQLInjection.cpp`
- Simulated injection detection required by the activity
- Prepared-statement security connection used later in Project One

### Exception Handling
Location: `activities/exceptions/`

- Completed `Exceptions.cpp`
- Standard and custom exceptions
- Specific handlers plus final catch-all protection
- Division-by-zero handling

### Unit Testing
Location: `activities/unit-testing/`

- Full recovered `test.cpp`
- Original Google Test collection suite
- Positive `insert()` test
- Negative `length_error` test
- Six Project Two tank-level validation tests
- Final result: **21 passed, 0 failed**

### Encryption
Location: `activities/encryption/`

- Completed `Encryption.cpp`
- Input data
- Decrypted output
- Exact encrypted output preserved in Base64-safe form
- XOR encrypt/decrypt activity

### Static Code Analysis
Location: `activities/static-analysis/`

- Original `QuestionableCode.cpp`
- Visual Studio analysis comparison
- Cppcheck 2.21.0 analysis
- Saved Cppcheck project configuration
- Full 32-message Cppcheck findings summary

## Milestones

Location: `milestones/`

- Ten Core Security Principles
- Ten C/C++ Secure Coding Standards
- Security-principle mapping
- Threat and priority concepts used in Project One

## Project One

Location: `projects/project-one/`

**Green Pace Secure Development Policy**

The completed policy covers secure coding standards, risk assessment, automated detection, encryption, Triple-A, DevSecOps, auditing, enforcement, and policy maintenance.

## Project Two

Location: `projects/project-two/`

**Security Policy Presentation**

- 19-slide presentation
- Full narration transcript
- Unit-testing demonstration
- DevSecOps automation summary
- Risks, recommendations, and conclusion

Narrated presentation: https://youtu.be/qfz68uJm49I

## Discussions and Reflections

- Defense in Depth
- Don’t Leave Security to the End
- Consider the Motive for the Attack
- Zero Trust
- Portfolio Reflection

## Deliberately Excluded Build Junk

The course folders contain large amounts of Visual Studio-generated material that do not represent portfolio work. I excluded:

- `.vs/` caches and Copilot indexes
- `x64/Debug/` compiled output
- `.obj`, `.pdb`, `.ilk`, `.idb`, `.tlog`, and executable files
- Duplicate ZIP archives of folders already represented in the repository
- Machine-specific `.vcxproj.user` files
- Downloaded Google Test package binaries and headers that can be restored through package management

## Third-Party Dependencies

SQLite's `sqlite3.c` and `sqlite3.h` were used as dependencies for the SQL injection activity. They are third-party source and are not presented as my work.

The narrated Project Two MP4 is larger than GitHub's normal single-file limit, so the YouTube copy is used instead of duplicating the video in the repository.
