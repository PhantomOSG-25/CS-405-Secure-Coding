# CS 405 — Secure Coding Lab

## Portfolio overview

This repository presents a focused C++ secure-coding lab based on verified CS-405 work. It demonstrates defensive programming techniques for numeric overflow, bounded input handling, injection-pattern detection, exception-safe validation, and testable security behavior.

The project is intentionally small and buildable. It removes IDE state, compiled binaries, bundled third-party databases, and intentionally exploitable classroom artifacts so reviewers can focus on engineering judgment and safe implementation.

## Demonstrated practices

- Checked arithmetic before performing an operation
- Explicit buffer-capacity validation and null termination
- Input screening as a defense-in-depth signal (not a substitute for parameterized queries)
- Explicit rejection of invalid encryption-demo inputs
- Deterministic, assertion-based tests and CTest integration
- Warnings enabled for the library and test target

## Build and test

```text
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

The XOR routine is retained only as an educational reversible-transform example. It is not cryptography and must not be used to protect production data; production systems should use an authenticated, vetted cryptographic library.

## Portfolio positioning

This project is strongest for secure-coding, application-security, QA/testing, and junior C++ development roles. See [the threat model](docs/THREAT_MODEL.md) and [provenance notes](docs/PROVENANCE.md) for scope and review boundaries.
