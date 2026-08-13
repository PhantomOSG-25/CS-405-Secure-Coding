# 4-1 Activity: Exceptions

Michael Wood  
SNHU  
CS-405 Secure Coding  
Instructor: Aaron Demory  
Date Due: 07/26/2026

## Summary of Process

For this activity, I used the C++ starter code and added exception handling so the program could deal with errors without crashing. The main goal was to make sure the program explained what went wrong instead of suddenly closing.

I added a check for division by zero and used a standard C++ exception when the denominator was zero. I also added another standard exception inside the custom application logic. The program caught the error, displayed message using the `what()` method, and continued running.

I also created a custom exception class that was based on `std::exception`. This exception was thrown inside the custom application logic and caught in the main function. I used separate catch blocks for the custom exception, standard exceptions, and any unknown exceptions.

The catch-all handler works as a backup in case an unexpected exception happens. I think it is useful as a final safety net, but it should not replace specific handlers because it does not explain exactly what caused the problem.

The biggest challenge was understanding where each exception needed to be thrown and caught. Once I broke the program into smaller sections and followed the order of the try and catch blocks, it made more sense. The program was built without errors, displayed all the required messages, and finished successfully with exit code 0.

**Figure 1. Exception handling test results.**

The screenshot shows the program catching a division-by-zero exception, handling a standard exception, catching the custom exception, and continuing to run without crashing. The program completed successfully with exit code 0.
