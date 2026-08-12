# CS-405 Complete Coursework Index

This repository is intended to preserve **all distinct CS-405 Secure Coding work**, not only the artifacts required for the final portfolio.

## Secure Coding Activities

### Numeric Overflow
Location: `activities/numeric-overflow/`

- Overflow and underflow detection using `std::numeric_limits`
- Signed, unsigned, character, and floating-point testing
- Numeric overflow activity summary

### Buffer Overflow
Location: `activities/buffer-overflow/`

- Original vulnerable starter code
- Secured version using bounded input
- Input-length validation and stream cleanup

### SQL Injection
Location: `activities/sql-injection/`

- SQL injection C++ activity source
- Normal and exploit-style Python input generators
- Prepared-statement security connection

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

Location: `reflections/`

- Module Six: Don't Leave Security to the End
- Module Seven: Consider the Motive for the Attack
- Module Eight: Portfolio Reflection

## Original Course Files Still to Archive

Some original files exist outside the text-based GitHub content already reconstructed here. These should also be stored in the repository so the archive contains both the readable portfolio version and the original submission evidence:

- `CS405_Module_One_Numeric_Overflow_Summary.docx`
- `CS 405 Security Policy(7).docx`
- `CS 405 Project Two Presentation(2).pptx`
- `CS 405 Project Two Script(1).docx`
- `Cppcheck Static Analysis Results.xml`
- Unit-testing result screenshot
- Visual Studio static-analysis screenshot
- Any original `QuestionableCode.cpp`, `exceptions.cpp`, and encryption project source files still available locally

The narrated MP4 is over GitHub's normal single-file size limit, so the YouTube version is used as the portfolio copy instead of duplicating the large video file in the repository.

## Third-Party Dependencies

SQLite source files used to build course examples are dependencies and are not presented as my own work. The repository focuses on the code I worked with, the security changes, testing evidence, and my analysis.
