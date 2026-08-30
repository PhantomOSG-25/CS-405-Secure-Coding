// NumericOverflows.cpp
// This program demonstrates how to detect and prevent numeric overflow
// and underflow before unsafe addition or subtraction occurs.

#include <iostream>     // std::cout, std::endl, std::boolalpha
#include <limits>       // std::numeric_limits
#include <string>       // std::string
#include <typeinfo>     // typeid
#include <utility>      // std::pair

/// <summary>
/// Adds an increment to a starting value for a specified number of steps.
/// Before each addition, the function checks whether the operation would
/// exceed the numeric limits of data type T.
/// </summary>
/// <typeparam name="T">A standard numeric C++ data type</typeparam>
/// <param name="start">The value to begin with</param>
/// <param name="increment">The value added during each step</param>
/// <param name="steps">The number of additions to perform</param>
/// <returns>
/// A pair containing the last safe numeric result and a Boolean value.
/// The Boolean value is true when overflow or underflow was detected.
/// </returns>
template <typename T>
std::pair<T, bool> add_numbers(
    T const& start,
    T const& increment,
    unsigned long int const& steps)
{
    T result = start;

    for (unsigned long int i = 0; i < steps; ++i)
    {
        // Check for positive overflow before performing the addition.
        // Rearranging result + increment > max prevents the unsafe
        // addition from being evaluated.
        if (increment > static_cast<T>(0) &&
            result > std::numeric_limits<T>::max() - increment)
        {
            // Return the last safe value and report that the operation failed.
            return { result, true };
        }

        // Signed numeric types may also be given a negative increment.
        // Check whether adding that negative value would move the result
        // below the lowest value supported by the data type.
        if constexpr (std::numeric_limits<T>::is_signed)
        {
            if (increment < static_cast<T>(0) &&
                result < std::numeric_limits<T>::lowest() - increment)
            {
                return { result, true };
            }
        }

        // This operation is performed only after the limits checks pass.
        result += increment;
    }

    // False indicates that every addition completed safely.
    return { result, false };
}

/// <summary>
/// Subtracts a decrement from a starting value for a specified number
/// of steps. Before each subtraction, the function checks whether the
/// result would cross below zero or exceed the limits of data type T.
/// </summary>
/// <typeparam name="T">A standard numeric C++ data type</typeparam>
/// <param name="start">The value to begin with</param>
/// <param name="decrement">The value subtracted during each step</param>
/// <param name="steps">The number of subtractions to perform</param>
/// <returns>
/// A pair containing the last safe numeric result and a Boolean value.
/// The Boolean value is true when underflow or overflow was detected.
/// </returns>
template <typename T>
std::pair<T, bool> subtract_numbers(
    T const& start,
    T const& decrement,
    unsigned long int const& steps)
{
    T result = start;

    for (unsigned long int i = 0; i < steps; ++i)
    {
        // The supplied test cases treat crossing below zero as underflow.
        // Checking result against decrement before subtraction prevents
        // unsigned values from wrapping to a very large positive value.
        if (decrement > static_cast<T>(0) && result < decrement)
        {
            // Return the last safe value and report the underflow.
            return { result, true };
        }

        // Subtracting a negative number is equivalent to addition.
        // For signed types, confirm that this would not exceed the
        // maximum value supported by the data type.
        if constexpr (std::numeric_limits<T>::is_signed)
        {
            if (decrement < static_cast<T>(0) &&
                result > std::numeric_limits<T>::max() + decrement)
            {
                return { result, true };
            }
        }

        // This subtraction is safe because all required checks passed.
        result -= decrement;
    }

    // False indicates that every subtraction completed safely.
    return { result, false };
}

// NOTE:
// The unary plus operator is used when displaying values in the test
// functions. This causes character data types, such as char and
// unsigned char, to be printed as numeric values instead of characters.

/// <summary>
/// Runs two addition tests for numeric type T.
/// The first test should complete successfully.
/// The second test should detect and prevent overflow.
/// </summary>
/// <typeparam name="T">A standard numeric C++ data type</typeparam>
template <typename T>
void test_overflow()
{
    // START DO NOT CHANGE

    // Number of additions that will be performed.
    const unsigned long int steps = 5;

    // The increment is calculated so that five additions remain within
    // the maximum value supported by T.
    const T increment = std::numeric_limits<T>::max() / steps;

    // Starting value for the addition test.
    const T start = 0;

    std::cout << "Overflow Test of Type = "
        << typeid(T).name()
        << std::endl;

    // END DO NOT CHANGE

    // Display Boolean values as true or false instead of 1 or 0.
    std::cout << std::boolalpha;

    std::cout << "\tAdding Numbers Without Overflow ("
        << +start << ", "
        << +increment << ", "
        << steps << ") = ";

    // The returned pair contains the numeric result and overflow status.
    auto [safeResult, safeOverflowDetected] =
        add_numbers<T>(start, increment, steps);

    std::cout << +safeResult
        << " | Overflow: "
        << safeOverflowDetected
        << std::endl;

    std::cout << "\tAdding Numbers With Overflow ("
        << +start << ", "
        << +increment << ", "
        << (steps + 1) << ") = ";

    // One additional step should exceed the maximum supported value.
    auto [overflowResult, overflowDetected] =
        add_numbers<T>(start, increment, steps + 1);

    std::cout << +overflowResult
        << " | Overflow: "
        << overflowDetected
        << std::endl;
}

/// <summary>
/// Runs two subtraction tests for numeric type T.
/// The first test should complete successfully.
/// The second test should detect and prevent underflow.
/// </summary>
/// <typeparam name="T">A standard numeric C++ data type</typeparam>
template <typename T>
void test_underflow()
{
    // START DO NOT CHANGE

    // Number of subtractions that will be performed.
    const unsigned long int steps = 5;

    // The decrement is calculated so that five subtractions remain
    // within the expected range.
    const T decrement = std::numeric_limits<T>::max() / steps;

    // Begin at the maximum value supported by T.
    const T start = std::numeric_limits<T>::max();

    std::cout << "Underflow Test of Type = "
        << typeid(T).name()
        << std::endl;

    // END DO NOT CHANGE

    // Display Boolean values as true or false instead of 1 or 0.
    std::cout << std::boolalpha;

    std::cout << "\tSubtracting Numbers Without Underflow ("
        << +start << ", "
        << +decrement << ", "
        << steps << ") = ";

    // The returned pair contains the numeric result and underflow status.
    auto [safeResult, safeUnderflowDetected] =
        subtract_numbers<T>(start, decrement, steps);

    std::cout << +safeResult
        << " | Underflow: "
        << safeUnderflowDetected
        << std::endl;

    std::cout << "\tSubtracting Numbers With Underflow ("
        << +start << ", "
        << +decrement << ", "
        << (steps + 1) << ") = ";

    // One additional subtraction should cross below zero.
    auto [underflowResult, underflowDetected] =
        subtract_numbers<T>(start, decrement, steps + 1);

    std::cout << +underflowResult
        << " | Underflow: "
        << underflowDetected
        << std::endl;
}

/// <summary>
/// Runs the overflow tests for the standard numeric data types.
/// </summary>
/// <param name="star_line">A line used to separate console sections</param>
void do_overflow_tests(const std::string& star_line)
{
    std::cout << std::endl
        << star_line
        << std::endl;

    std::cout << "*** Running Overflow Tests ***"
        << std::endl;

    std::cout << star_line
        << std::endl;

    // Signed integer types.
    test_overflow<char>();
    test_overflow<wchar_t>();
    test_overflow<short int>();
    test_overflow<int>();
    test_overflow<long>();
    test_overflow<long long>();

    // Unsigned integer types.
    test_overflow<unsigned char>();
    test_overflow<unsigned short int>();
    test_overflow<unsigned int>();
    test_overflow<unsigned long>();
    test_overflow<unsigned long long>();

    // Floating-point types.
    test_overflow<float>();
    test_overflow<double>();
    test_overflow<long double>();
}

/// <summary>
/// Runs the underflow tests for the standard numeric data types.
/// </summary>
/// <param name="star_line">A line used to separate console sections</param>
void do_underflow_tests(const std::string& star_line)
{
    std::cout << std::endl
        << star_line
        << std::endl;

    std::cout << "*** Running Underflow Tests ***"
        << std::endl;

    std::cout << star_line
        << std::endl;

    // Signed integer types.
    test_underflow<char>();
    test_underflow<wchar_t>();
    test_underflow<short int>();
    test_underflow<int>();
    test_underflow<long>();
    test_underflow<long long>();

    // Unsigned integer types.
    test_underflow<unsigned char>();
    test_underflow<unsigned short int>();
    test_underflow<unsigned int>();
    test_underflow<unsigned long>();
    test_underflow<unsigned long long>();

    // Floating-point types.
    test_underflow<float>();
    test_underflow<double>();
    test_underflow<long double>();
}

/// <summary>
/// Entry point into the application.
/// </summary>
/// <returns>Zero when the program completes successfully</returns>
int main()
{
    // Create a line of asterisks for separating console output.
    const std::string star_line = std::string(50, '*');

    std::cout
        << "Starting Numeric Underflow / Overflow Tests!"
        << std::endl;

    // Run all overflow tests.
    do_overflow_tests(star_line);

    // Run all underflow tests.
    do_underflow_tests(star_line);

    std::cout
        << std::endl
        << "All Numeric Underflow / Overflow Tests Complete!"
        << std::endl;

    return 0;
}

// Run program: Ctrl + F5
// Debug program: F5
