# Provenance and publication boundary

## Source basis

The verified CS-405 archive contains coursework on numeric overflow, buffer overflow, SQL injection, exception handling, unit testing, encryption, and static analysis. The archive also contains Visual Studio caches, compiled binaries, third-party database sources, and classroom demonstrations of unsafe behavior.

## Portfolio adaptation

This repository is a clean portfolio adaptation of those themes. The library and tests are organized as a small, reproducible C++ project so reviewers can build and run the defensive examples without needing Visual Studio or the original course environment.

## Exclusions

- No compiled executables, debug symbols, IDE caches, or `.vs` directories
- No bundled SQLite source or generated database files
- No intentionally exploitable program is included as a runnable target
- No instructor, submission, or personal metadata

The original archive remains private as the source record. Any future expansion should preserve attribution and keep demonstrations isolated and clearly labeled.
