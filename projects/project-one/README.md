# Project One: Green Pace Secure Development Policy

## Overview

Project One was the largest security-policy assignment in CS-405. I developed a secure development policy for the fictional company **Green Pace** that combined secure coding standards, risk assessment, automated detection, encryption, access control, audit controls, and DevSecOps practices.

The final policy is **43 pages** and builds security into the development process instead of treating security as a final inspection.

## Ten Core Security Principles

1. Validate Input Data
2. Heed Compiler Warnings
3. Architect and Design for Security Policies
4. Keep It Simple
5. Default Deny
6. Adhere to the Principle of Least Privilege
7. Sanitize Data Sent to Other Systems
8. Practice Defense in Depth
9. Use Effective Quality Assurance Techniques
10. Adopt a Secure Coding Standard

## Ten C/C++ Coding Standards

The policy includes ten C/C++ standards covering:

- Correct data types
- Numeric value validation
- String length and range checks
- SQL injection prevention
- Memory protection
- Assertions
- Exception handling
- Numeric overflow
- Variable initialization
- Hard-coded secrets

Each standard includes secure guidance, noncompliant and compliant examples, principle mapping, risk assessment, and automated-detection tools.

## Risk Assessment

I evaluated the standards using severity, likelihood, remediation cost, and priority level. SQL injection and hard-coded secrets were treated as the highest-priority risks, while other standards were ranked according to the damage they could cause and how likely they were to occur.

## Encryption and Triple-A

The policy defines protection for data:

- At rest
- In flight
- In use

It also applies the Triple-A framework:

- Authentication
- Authorization
- Accounting

## DevSecOps and Automation

The policy recommends automated security checks throughout development. Static analysis, unit testing, security testing, deployment checks, logging, and monitoring are used at different stages so problems can be found earlier.

## Practical Connection

I approached the policy using the same type of process I use when troubleshooting work in the field: inspect the problem, understand the risk, use the correct tool, correct the cause instead of only the symptom, test the result, and continue monitoring.

## Original Submission

Final course document: `CS 405 Security Policy(7).docx`

The original Word document is retained as part of this repository's complete course archive.
