# CS 405 Project Two: Security Policy Presentation

**Michael Wood**  
**Narrated Presentation:** https://youtu.be/qfz68uJm49I

## Slide 1

Hello, my name is Michael Wood. In this presentation, I will go over the Green Pace security policy and explain how the different security practices work together to protect the company’s software and information. I will cover the main security principles, coding standards, encryption, access control, unit testing, automated tools, and some of the risks that Green Pace needs to consider. My goal is to show how security can be built into the development process instead of waiting until a problem happens.

## Slide 2

Green Pace needs a security policy, so everyone follows the same security practices while software is being developed. Defense in depth means using more than one layer of protection instead of depending on a single security control. This can include secure coding, access control, encryption, testing, and logging. I look at this like pest control because I usually do not depend on one treatment alone. I may remove what is attracting the pest, find entry points, treat the problem, and then monitor the area. Software security works the same way because if one layer fails, another layer can still help protect the system.

## Slide 3

For this threat matrix, I grouped the coding standards based on how likely the problem is and how serious the results could be. SQL injection and hard-coded passwords are some of the highest concerns because they received a threat level of 5. Numeric overflow was also placed in the priority group because it has high severity and could cause serious problems even though the likelihood was rated as possible.

Numeric value checks, string length, and memory protection were placed in the likely group because these problems can happen fairly easily if the code does not properly check input or manage memory. Assertions, exceptions, and variable initialization received lower overall threat levels, so I placed them in the lower-priority group. Using the correct data type was rated as unlikely and received the lowest overall level. Lower priority does not mean the problem should be ignored. It only helps decide which problems should be fixed first. I look at this the same way I would prioritize a pest control job by taking care of the problem that has the greatest chance of causing damage first.

## Slide 4

These 10 principles are the foundation for the coding standards in the Green Pace security policy. Some principles connect to several standards because the same security idea can protect more than one part of the program. For example, validating input connects to data types, numeric values, string length, SQL injection, assertions, and numeric overflow. Defense in depth also connects to several standards because it is about using more than one layer of protection.

I look at the principles as the reason behind the rules. In pest control, I may have several procedures for treating different pests, but the main principles stay the same, such as finding the source of the problem, using the correct treatment, and preventing the problem from returning. Secure coding works in a similar way. The coding standards give the specific steps, while the principles explain why those steps matter.

## Slide 5

I ranked the 10 coding standards based on the threat levels I assigned in the security policy. I looked at the severity of the problem, how likely it is to happen, how difficult it would be to fix, and how quickly it should be addressed. Level 5 represents the highest priority, while the lower numbers represent problems that may not need to be handled first.

SQL injection and hard-coded passwords received the highest rating because they could directly expose company or customer information or allow someone to gain access they should not have. Numeric values, string length, memory protection, and numeric overflow were rated at Level 4 because they can cause serious errors, crashes, or security problems if they are not handled correctly. Assertions, exceptions, and variable initialization were rated at Level 3, while using the wrong data type was rated at Level 2.

I look at this the same way I prioritize problems during a pest control job. Some issues need immediate attention because they can cause more damage or create a bigger risk. Other problems still need to be corrected, but they may not be the first thing I handle. The ranking gives the development team a clear way to decide what should be fixed first.

## Slide 6

Green Pace uses three types of encryption because information needs protection at different times. Encryption at rest protects information while it is stored, such as customer records, employee information, databases, and backup files. Encryption in flight protects information while it is moving between computers, servers, databases, or mobile devices. Secure connections such as HTTPS help keep someone from reading the information while it is being sent.

Encryption in use protects sensitive information while the program is actively working with it. Access should be limited so only approved users or systems can see or use the information. I look at these three types like protecting customer paperwork during a workday. It needs to be secure while it is stored, protected while I am carrying or sending it somewhere, and still protected while I have it open and am actually using it. The information does not stop being sensitive just because its location or use changes.

## Slide 7

The Triple-A framework includes authentication, authorization, and accounting. Authentication makes sure the person trying to enter the system is actually who they say they are. Green Pace should use individual accounts, strong passwords, and multi-factor authentication when sensitive information is involved.

Authorization controls what someone can do after they log in. A user should only have access to the information needed to do their job. For example, a technician may need customer service records but should not automatically have access to payroll, banking information, or administrator settings.

Accounting keeps a record of what happens inside the system. This includes logins, database changes, new users, access changes, and files that are opened or changed. I look at this like keeping service records in pest control. If a question comes up later, I can look back and see what was done, when it happened, and who handled it. The Triple-A framework works the same way by controlling who gets in, what they can do, and keeping a record of what happened.

## Slide 8

For my first unit test, I chose numeric value validation because a program should make sure a number makes sense before using it. In this example, I used the level of a pest control spray tank, which should only be between zero and one hundred percent. My first test used fifty percent, which is a normal valid value. I expected the program to accept it, and the test passed. This shows that the program correctly accepts a tank level that is inside the allowed range.

## Slide 9

My second test checked the lower boundary of the valid range by using a tank level of zero percent. A tank can be completely empty, so zero percent should still be accepted as a valid value. I expected the program to accept it, and the test passed. This shows that the program correctly handles the minimum value instead of rejecting a valid boundary value. Testing the boundary is important because mistakes often happen right at the edge of an allowed range.

## Slide 10

My third test checked the upper boundary of the valid range by using a tank level of one hundred percent. A tank can be completely full, so one hundred percent should still be accepted as a valid value. I expected the program to accept it, and the test passed. This shows that the program correctly handles the highest allowed value without rejecting it. Testing both the lower and upper limits helps make sure the program handles the full valid range correctly.

## Slide 11

My fourth test checked a value just below the valid range by using negative one percent. A tank level cannot be below zero, so I expected the program to reject this value. The test passed, which shows that the program correctly blocks a value that is outside the allowed range. This is important because bad input should be stopped before it is used in a calculation or stored in the system. In real life, a negative tank level does not make sense, so the software should not treat it like a normal value.

## Slide 12

My fifth test checked a value just above the valid range by using one hundred one percent. Since one hundred percent is the maximum valid tank level, anything above that should be rejected. I expected the program to reject one hundred one percent, and the test passed. This shows that the program correctly stops a value that is just outside the upper limit. Testing a value right above the boundary helps make sure the program does not accidentally allow bad information into the system.

## Slide 13

My sixth test used one hundred fifty percent, which is well above the valid tank level range. I expected the program to reject this value, and the test passed. This shows that the program is not only catching values just outside the limit but also values that clearly do not make sense. In a real pest control situation, a tank cannot be one hundred fifty percent full, so the software should never accept that as a normal value. This final test helps confirm that the numeric validation is working the way it should.

## Slide 14

This diagram shows how security can be added throughout the DevSecOps process instead of waiting until the software is finished. During planning and design, the team decides what security requirements need to be followed. During coding and building, the compiler and static analysis tools can look for problems such as unsafe memory use, bad input validation, SQL injection, and hard-coded passwords. During testing, unit tests and other security tests can check whether the program handles both normal and bad input correctly.

Security should also continue after the software is deployed. Automated checks can look for unsafe settings or exposed information before release, while logs and monitoring can watch for unusual activity after the system is running. I look at this like checking my equipment throughout a pest control job instead of waiting until the end to find out something was leaking or not working correctly. Checking each stage gives the development team more chances to catch and fix problems early.

## Slide 15

These tools can be used at different points in the DevSecOps process to help find problems before the software is released. Microsoft C++ Code Analysis can run during the build process and warn developers about unsafe coding practices. Cppcheck can also be used during building and testing to look for problems such as memory leaks or pointers being used after the memory has already been released. GitHub CodeQL can look deeper into how information moves through the program and can help find problems such as SQL injection and unsafe memory use.

Clang-Tidy can check the code and recommend safer ways to write modern C++. Google Test fits into the testing stage and is the tool I used for my tank-level unit tests. It allowed me to check normal values, boundary values, and bad values before the program moved any further. I look at these tools like using different tools on a job. One tool may find a problem another one misses, so using several of them gives the development team more ways to catch problems early.

## Slide 16

The biggest benefit of acting now is that Green Pace can find and correct security problems before they reach the finished software. I would start with the highest-risk problems, especially SQL injection and hard-coded passwords, because those received the highest threat level in my security policy. These problems could expose private information or allow someone to gain access they should not have. After those are handled, I would move to the Level 4 problems such as numeric validation, string length, memory protection, and numeric overflow.

Waiting creates more risk because a problem that is easier to fix during development may become much harder and more expensive after the software is already being used. The strategy can also fall short if the company depends too much on automated tools because no single tool will find every possible problem. Developers still need to review the results, perform testing, and keep the security policy updated as new threats appear.

I look at this the same way I handle a pest control problem. If I find an active infestation or something that could cause damage, I take care of that first instead of spending my time on a smaller issue. Waiting usually gives the problem more time to spread and can make the job harder later. Security risks should be handled the same way by dealing with the most serious problems first and continuing to monitor the rest.

## Slide 17

The Green Pace security policy covers many important areas, but there are still places where it can be improved over time. One gap is making sure the policy stays current as software, tools, and security threats change. Green Pace should regularly review the policy instead of assuming that rules written today will always be enough.

Another recommendation is to continue using both automated tools and human review. Automated tools can find many problems, but developers should still review the code, run unit and security tests, and investigate warnings instead of depending on the tools to make every decision. Green Pace should also continue monitoring logs and unusual activity after the software is released because security does not stop when development ends. The policy already requires evidence of compliance, including code standards, access controls, data protection, logs, and audits, so those records should be reviewed and used to correct problems when they are found.

I look at this like pest control because a treatment plan cannot just be written once and forgotten. Conditions change, products change, and sometimes a problem comes back in a different way. I still have to inspect, monitor, and adjust what I am doing when needed. A security policy should work the same way.

## Slide 18

Going forward, Green Pace should continue using secure coding standards throughout the entire development process. The standards should cover areas such as checking numeric values and string lengths, protecting memory, preventing SQL injection, handling errors correctly, checking calculations for overflow, and keeping passwords and security keys out of the source code. These rules give developers a consistent way to prevent known problems instead of trying to fix them after the software is already finished.

Security also needs to include testing, automated tools, code reviews, and monitoring because no single control can catch everything. The unit tests I completed showed how even something as simple as checking a tank level can stop bad information before the program uses it. That same idea can be applied to larger and more serious security problems.

I look at secure coding the same way I look at doing a job correctly in the field. Having the right procedures does not guarantee that nothing will ever go wrong, but it gives you a better chance of preventing problems and catching them early. Green Pace should keep reviewing and updating the security policy as new risks are discovered.

## Slide 19

These are the main sources I used to support the Green Pace security policy and presentation. They include the secure coding standards, database guidance, automated security tools, and the Google Test framework used for my unit testing. I also included my Project One security policy because information from that assignment was used throughout this presentation.
