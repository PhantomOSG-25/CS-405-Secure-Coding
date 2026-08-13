// BufferOverflow.cpp
// This program prevents user input from writing beyond the
// boundaries of a fixed-size character buffer.

#include <iomanip>
#include <iostream>
#include <limits>

int main()
{
    std::cout << "Buffer Overflow Example" << std::endl;

    // The account number must remain directly before the input buffer.
    const std::string account_number = "CharlieBrown42";
    char user_input[20];

    std::cout << "Enter a value: ";

    // getline limits the amount of data written to the character array.
    // The buffer can hold 19 entered characters plus the null terminator.
    std::cin.getline(user_input, sizeof(user_input));

    // If the input is longer than the buffer can hold, getline sets
    // the fail state instead of writing outside the array.
    if (std::cin.fail())
    {
        std::cout
            << "Error: The value entered was too long. "
            << "The maximum length is "
            << (sizeof(user_input) - 1)
            << " characters."
            << std::endl;

        // Reset the input stream and remove the remaining characters.
        std::cin.clear();
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(),
            '\n');

        std::cout
            << "Account Number = "
            << account_number
            << std::endl;

        return 1;
    }

    std::cout
        << "You entered: "
        << user_input
        << std::endl;

    std::cout
        << "Account Number = "
        << account_number
        << std::endl;

    return 0;
}
