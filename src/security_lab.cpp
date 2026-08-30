#include "security_lab.hpp"

#include <algorithm>
#include <cctype>
#include <limits>
#include <stdexcept>

namespace security_lab {

CheckedResult checked_add(std::int64_t left, std::int64_t right) {
    if ((right > 0 && left > std::numeric_limits<std::int64_t>::max() - right) ||
        (right < 0 && left < std::numeric_limits<std::int64_t>::min() - right)) {
        return {left, true};
    }
    return {left + right, false};
}

bool copy_bounded(const std::string& input, char* destination, std::size_t capacity) {
    if (destination == nullptr || capacity == 0 || input.size() >= capacity) {
        return false;
    }
    std::copy(input.begin(), input.end(), destination);
    destination[input.size()] = '\0';
    return true;
}

bool contains_tautology_pattern(const std::string& input) {
    std::string normalized;
    normalized.reserve(input.size());
    for (unsigned char ch : input) {
        if (!std::isspace(ch)) {
            normalized.push_back(static_cast<char>(std::tolower(ch)));
        }
    }
    return normalized.find("or1=1") != std::string::npos ||
           normalized.find("or'1'='1'") != std::string::npos;
}

std::string xor_demo_transform(const std::string& input, const std::string& key) {
    if (key.empty()) {
        throw std::invalid_argument("key must not be empty");
    }
    std::string output = input;
    for (std::size_t i = 0; i < output.size(); ++i) {
        output[i] = static_cast<char>(input[i] ^ key[i % key.size()]);
    }
    return output;
}

}  // namespace security_lab
