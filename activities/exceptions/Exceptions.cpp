// Exceptions.cpp
// This program demonstrates standard exceptions, a custom exception,
// specific catch handlers, and a final catch-all handler.

#include <exception>
#include <iostream>
#include <stdexcept>

// Custom exception class derived from std::exception.
// The what() function returns the message displayed when it is caught.
class CustomApplicationException : public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "A custom application exception occurred.";
    }
};

bool do_even_more_custom_application_logic()
{
    std::cout
        << "Running Even More Custom Application Logic."
        << std::endl;

    // Throw a standard C++ exception to simulate an application error.
    throw std::runtime_error(
        "The even more custom application logic failed.");
}

void do_custom_application_logic()
{
    std::cout
        << "Running Custom Application Logic."
        << std::endl;

    // Catch the standard exception inside this function so the program
    // can display the error and continue processing.
    try
    {
        if (do_even_more_custom_application_logic())
        {
            std::cout
                << "Even More Custom Application Logic Succeeded."
                << std::endl;
        }
    }
    catch (const std::exception& exception)
    {
        std::cout
            << "Standard exception caught: "
            << exception.what()
            << std::endl;

        std::cout
            << "The program will continue running."
            << std::endl;
    }

    std::cout
        << "Leaving Custom Application Logic."
        << std::endl;

    // Throw the custom exception so it can be caught explicitly in main.
    throw CustomApplicationException();
}

float divide(float numerator, float denominator)
{
    // Prevent division by zero by throwing a standard exception.
    if (denominator == 0.0f)
    {
        throw std::invalid_argument(
            "The denominator cannot be zero.");
    }

    return numerator / denominator;
}

void do_division() noexcept
{
    const float numerator = 10.0f;
    const float denominator = 0.0f;

    // Catch only the exception type thrown by divide().
    try
    {
        const float result =
            divide(numerator, denominator);

        std::cout
            << "divide("
            << numerator
            << ", "
            << denominator
            << ") = "
            << result
            << std::endl;
    }
    catch (const std::invalid_argument& exception)
    {
        std::cout
            << "Division exception caught: "
            << exception.what()
            << std::endl;
    }
}

int main()
{
    std::cout
        << "Exceptions Tests!"
        << std::endl;

    try
    {
        do_division();
        do_custom_application_logic();
    }
    // Catch the custom exception before std::exception because
    // CustomApplicationException is derived from std::exception.
    catch (const CustomApplicationException& exception)
    {
        std::cout
            << "Custom exception caught in main: "
            << exception.what()
            << std::endl;
    }
    catch (const std::exception& exception)
    {
        std::cout
            << "Standard exception caught in main: "
            << exception.what()
            << std::endl;
    }
    catch (...)
    {
        // Final safety net for unexpected exception types.
        std::cout
            << "An unknown exception was caught in main."
            << std::endl;
    }

    std::cout
        << "All exception tests completed."
        << std::endl;

    return 0;
}
