#pragma once

#include <cstddef>
#include <cstdint>
#include <string>

namespace security_lab {

struct CheckedResult {
    std::int64_t value;
    bool overflowed;
};

CheckedResult checked_add(std::int64_t left, std::int64_t right);

// Copies input only when it fits, including the null terminator.
bool copy_bounded(const std::string& input, char* destination, std::size_t capacity);

// Detects a common tautology pattern so callers can reject unsafe raw queries.
bool contains_tautology_pattern(const std::string& input);

// Educational reversible transform only; not a replacement for authenticated encryption.
std::string xor_demo_transform(const std::string& input, const std::string& key);

}  // namespace security_lab
