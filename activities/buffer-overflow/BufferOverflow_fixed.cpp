// BufferOverflow_fixed.cpp
// Secure version of the CS-405 buffer overflow activity.

#include <iostream>
#include <limits>
#include <string>

int main()
{
    std::cout << "Buffer Overflow Example" << std::endl;

    const std::string account_number = "CharlieBrown42";
    char user_input[20];

    std::cout << "Enter a value: ";
    std::cin.getline(user_input, sizeof(user_input));

    // A 20-character array can safely hold 19 characters plus the null terminator.
    if (std::cin.fail())
    {
        std::cout << "Error: Input is too long. Maximum length is 19 characters." << std::endl;

        // Clear the failed input state and discard anything still waiting in the input stream.
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }

    std::cout << "You entered: " << user_input << std::endl;
    std::cout << "Account Number = " << account_number << std::endl;

    return 0;
}
