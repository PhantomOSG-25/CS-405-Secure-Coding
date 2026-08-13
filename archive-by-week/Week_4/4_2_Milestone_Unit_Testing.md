# 4-2 Milestone: Unit Testing

Michael Wood  
SNHU  
CS-405 Secure Coding  
Instructor: Aaron Demory  
Date Due: 07/26/2026

## Summary of Process

For this milestone, I created a Google Test project in Visual Studio and replaced the sample code with the provided `test.cpp` starter code. I added the header files needed and worked through each TODO section one at a time. I also commented out the `AlwaysFail` test because it was only included as an example and was supposed to fail.

I completed tests for adding values to the vector, checking its size and capacity, resizing it, clearing it, erasing values, and reserving extra space. I used `ASSERT` when the test needed to stop after a failure and `EXPECT` when the test could continue checking other conditions.

The negative test provided checked that an `out_of_range` exception happened when the program tried to access an invalid position in an empty vector. For my two original tests, I created one positive test and one negative test. My positive test used `insert()` to add the value 10 at the beginning of the vector and then checked that all three values stayed in the correct order. My negative test tried to reserve more space than the vector could hold and checked that a `length_error` exception was thrown.

The main issue I found was making sure every test had the correct name, braces, and expected result. I fixed this by completing and checking each test separately before building the project. After the code was built successfully, I ran the tests in Test Explorer. All 15 tests passed with 0 failed and 0 skipped.

**Figure 1.** Google Test results show all 15 unit tests passed with no failures or skipped tests.
