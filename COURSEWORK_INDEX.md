# CS-405 Complete Coursework Index

This repository is intended to preserve **all distinct CS-405 Secure Coding work**, not only the artifacts required for the final portfolio.

## Recovered Course Folder Archive

I recovered and reviewed the original Week 1 through Week 3 course folders. Useful coursework has been preserved while Visual Studio caches, compiled binaries, debug output, duplicate ZIP files, and third-party library source were left out.

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
- Completed SQL injection C++ source
- Completed buffer overflow C++ source
- Buffer-overflow exploit and normal-input Python helpers

### Week 3
Location: `archive-by-week/Week_3/`

- Green Pace Security Policy milestone
- Ten core security principles
- Ten C/C++ coding standards
- Compliant and noncompliant code examples
- Foundation for the later Project One policy

## Secure Coding Activities

### Numeric Overflow
Location: `activities/numeric-overflow/`

- Actual completed `NumericOverflow.cpp` recovered from the course folder
- Overflow and underflow detection using `std::numeric_limits`
- Signed, unsigned, character, and floating-point testing
- Numeric overflow activity summary

### Buffer Overflow
Location: `activities/buffer-overflow/`

- Original vulnerable starter example
- Actual submitted `BufferOverflow.cpp`
- Secured input using `std::cin.getline()`
- Input-length validation and stream cleanup
- Exploit-style and normal Python test-input helpers

### SQL Injection
Location: `activities/sql-injection/`

- Actual completed `SQLInjection.cpp` recovered from the course folder
- Detection of the simulated always-true `OR` conditions required by the activity
- Normal-query verification and attack blocking
- Prepared-statement security connection used later in Project One

### Exception Handling
Location: `activities/exceptions/`

- Specific exception handling
- Negative exception testing
- `std::length_error` test behavior

### Encryption
Location: `activities/encryption/`

- Module Five encryption activity summary
- Encryption at rest
- Encryption in flight
- Encryption in use

### Static Code Analysis
Location: `activities/static-analysis/`

- Visual Studio C++ Code Analysis comparison
- Cppcheck 2.21.0 analysis
- Cppcheck project configuration
- QuestionableCode findings
- Original XML analysis report retained in the course archive

### Unit Testing
Location: `activities/unit-testing/`

- Module Four unit-testing milestone
- Original 15-test suite result
- Six additional tank-level validation tests
- Final result: 21 passed, 0 failed

## Milestones

Location: `milestones/`

- Ten Core Security Principles
- Ten C/C++ Secure Coding Standards
- Security-principle mapping
- Threat and priority concepts used in Project One

## Project One

Location: `projects/project-one/`

**Green Pace Secure Development Policy**

The final policy includes:

- Ten security principles
- Ten C/C++ coding standards
- Noncompliant and compliant examples
- Threat assessments
- Automated detection tools
- Encryption policies
- Triple-A framework
- DevSecOps automation
- Audit controls
- Enforcement and change control

Original final document: `CS 405 Security Policy(7).docx`

## Project Two

Location: `projects/project-two/`

**Security Policy Presentation**

- 19-slide PowerPoint presentation
- Full narration transcript
- Unit-testing demonstration
- DevSecOps automation summary
- Risks, recommendations, and conclusion
- Narrated YouTube presentation

Narrated presentation: https://youtu.be/qfz68uJm49I

Original final files:

- `CS 405 Project Two Presentation(2).pptx`
- `CS 405 Project Two Script(1).docx`

## Discussions

Location: `discussions/`

- Module Eight: Zero Trust

## Reflections and Journals

- Week 2 Defense in Depth journal is preserved under `archive-by-week/Week_2/`.
- Module Six: Don't Leave Security to the End
- Module Seven: Consider the Motive for the Attack
- Module Eight: Portfolio Reflection

## Files Still Worth Recovering From Later Weeks

The Week 1-3 ZIP did not contain all later-course source files. As later folders become available, the archive can still add:

- Original `QuestionableCode.cpp`
- Original `exceptions.cpp` unit-test project
- Module Five encryption source project
- Static-analysis screenshots
- Unit-testing screenshots
- Any additional Week 4-8 journals, discussions, and source projects not already reconstructed here

## Deliberately Excluded Build Junk

The uploaded course folder contained large amounts of Visual Studio-generated data that do not represent coursework and should not live in a portfolio repository. I excluded:

- `.vs/` caches and Copilot indexes
- `x64/Debug/` build output
- `.obj`, `.pdb`, `.ilk`, `.idb`, `.tlog`, and executable files
- Duplicate ZIP archives of folders already present
- Machine-specific `.vcxproj.user` files

## Third-Party Dependencies

The SQL injection activity included SQLite's `sqlite3.c` and `sqlite3.h`. Those are third-party dependency files and are not presented as my own source code. The repository focuses on the code I worked with, the security changes, testing evidence, and my analysis.

The narrated Project Two MP4 is over GitHub's normal single-file size limit, so the YouTube version is used as the portfolio copy instead of duplicating the large video file in the repository.
