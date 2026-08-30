# 5-2 Activity: Encryption Coding

Michael Wood  
SNHU  
CS-405 Secure Coding  
Instructor: Aaron Demory  
Date Due: 08/02/2026

## Summary of Process

For this activity, I completed a C++ program that reads information from a text file, encrypts it, decrypts it, and saves the results into two new files. The program used XOR encryption with the password key from the starter code.

I completed the `read_file()` function so the program could open the input file and read all the information into a string. I also completed the `save_data_file()` function so the program could save the student name, current date, password key, and data in the required format.

One issue I had was entering the `stdexcept` header without the `#` symbol. I fixed that so the program could use `runtime_error`. I also corrected the spelling of the decrypted output filename and made sure the input file was placed inside the project folder.

After making the changes, the project built with one succeeded and zero failed. The program created both output files and finished with exit code 0. I opened the decrypted file and confirmed that the original information was readable again.

**Figure 1.** Console output showing that the program read the input file, encrypted the data, decrypted it, and completed successfully with exit code 0.
