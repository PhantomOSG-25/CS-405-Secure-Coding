#include "security_lab.hpp"

#include <cassert>
#include <cstdint>
#include <cstring>
#include <iostream>
#include <limits>

int main() {
    using security_lab::checked_add;

    auto safe = checked_add(40, 2);
    assert(!safe.overflowed && safe.value == 42);

    auto positive_overflow = checked_add(std::numeric_limits<std::int64_t>::max(), 1);
    assert(positive_overflow.overflowed);

    auto negative_overflow = checked_add(std::numeric_limits<std::int64_t>::min(), -1);
    assert(negative_overflow.overflowed);

    char buffer[8]{};
    assert(security_lab::copy_bounded("secure", buffer, sizeof(buffer)));
    assert(std::strcmp(buffer, "secure") == 0);
    assert(!security_lab::copy_bounded("too-long", buffer, sizeof(buffer)));
    assert(!security_lab::copy_bounded("x", nullptr, 1));

    assert(security_lab::contains_tautology_pattern("name' OR 1 = 1 --"));
    assert(!security_lab::contains_tautology_pattern("name = ?"));

    const auto encoded = security_lab::xor_demo_transform("portfolio", "key");
    assert(security_lab::xor_demo_transform(encoded, "key") == "portfolio");

    bool rejected_empty_key = false;
    try {
        (void)security_lab::xor_demo_transform("data", "");
    } catch (const std::invalid_argument&) {
        rejected_empty_key = true;
    }
    assert(rejected_empty_key);

    std::cout << "All secure-coding tests passed.\n";
}
