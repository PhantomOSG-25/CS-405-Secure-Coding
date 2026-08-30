# Threat model and security notes

## In scope

- Integer overflow and underflow at arithmetic boundaries
- Writes beyond fixed-size character buffers
- Common tautology patterns in raw query input
- Invalid key handling in an educational transform

## Out of scope

- Production authentication or password storage
- Complete SQL parsing or database authorization
- Cryptographic confidentiality, integrity, or key management
- Network, filesystem, or process isolation

## Design decisions

The library fails closed for invalid capacity, null destinations, oversized input, and empty keys. The query-pattern helper is deliberately described as defense in depth: applications must use parameterized statements and least-privilege database access rather than rely on string matching.

## Verification strategy

Tests cover normal behavior, positive and negative arithmetic boundaries, rejected oversized input, null-pointer rejection, injection-pattern detection, reversible transformation, and invalid-key handling.
