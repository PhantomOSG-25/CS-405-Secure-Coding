# 8-2 Journal: Portfolio Reflection

Michael Wood  
SNHU  
CS-405 Secure Coding  
Instructor: Aaron Demory  
Date Due: 08/23/2026

## CS 405 Portfolio Reflection

One of the biggest things I learned in this course is that security cannot be something that gets thrown onto a program at the end and called finished. When I first started working with programming, I was mostly concerned with whether the code worked. If I entered something and got the result I expected, I considered that a success. CS 405 has shown me that working code and secure code are not always the same thing. Security needs to be considered while the software is being designed, written, tested, and eventually released. NIST recommends integrating secure software development practices throughout the software development life cycle because doing so can reduce vulnerabilities in released software and help address the causes of those vulnerabilities before they keep coming back (Souppaya et al., 2022).

That idea makes sense to me because it is close to how I already approach pest control. I would not go into a house, spray one room, leave, and then decide afterward that maybe I should have inspected where the pests were coming from. I need to inspect the problem, determine the cause, choose the right treatment, perform the work correctly, and then make sure the problem is actually controlled. Secure coding works the same way. During this course, I worked with numeric overflow, buffer problems, input validation, exceptions, memory issues, and variables that were not initialized correctly. Following a coding standard gives developers a process to follow instead of hoping they remember every possible problem. The SEI CERT Coding Standard also ranks problems by factors such as severity, likelihood, and how difficult they are to correct, which shows that secure coding is not just about finding mistakes but also understanding which mistakes create the most risk (Software Engineering Institute, 2025).

Risk assessment was another part of this course that connected strongly with how I already work. Everything cannot always be treated as the highest priority at the same time. If I arrive at a property with several pest problems, I have to determine which one can cause the most damage, which one creates the greatest risk to the customer, and what needs to be handled first. I used the same kind of thinking when I created the Green Pace threat matrix. Problems such as SQL injection and hard-coded secrets were placed higher because the potential consequences could be much greater than some of the lower-level coding problems. NIST explains that risk assessment gives decision makers information they can use to determine the proper response to identified risks (Joint Task Force Transformation Initiative, 2012).

I also learned that cost has to be considered, but cost does not only mean what it costs to fix the code today. Waiting can cost much more later. Fixing a vulnerability while I am already working on the program is one thing. Trying to repair it after customers are using the software, data has been exposed, or the program has failed is another situation completely. The CERT approach supports this type of thinking because its prioritization method considers not only severity and likelihood but also remediation cost (Software Engineering Institute, 2025). For me, that reinforces the idea that fixing the right problems early is not just better security. It can also be a better business decision.

Zero trust was another concept that made more sense to me once I stopped looking at the name and thought about how it actually works. I do not take zero trust to mean that everybody is automatically considered dishonest. I see it as not giving someone unlimited trust just because they passed one security check. NIST describes zero trust as removing implicit trust based only on where a user or device is located and requiring authentication and authorization before access to resources is established (Rose et al., 2020). That fits with least privilege and the Triple-A framework we studied. A person should prove who they are, receive access to what they actually need, and have important activity recorded.

I can relate that to my own work as well. Just because I am allowed onto a customer's property does not mean I suddenly need access to everything on that property. I need access to the areas required to perform the service. Software should work the same way. If a user only needs access to one part of a system, there is no reason to give that user access to everything. That limits the amount of damage that can happen if an account is compromised. NIST's zero trust guidance specifically shifts security away from simply trusting the network perimeter and toward protecting individual users, assets, and resources (Rose et al., 2020).

Finally, I learned that writing a security policy does not do much good if nobody actually uses it. Green Pace would need to make the policy part of the normal development process through coding standards, testing, access controls, encryption, logging, code reviews, and automated tools. One thing that stood out to me during the course was comparing what I could see myself in the code with what Visual Studio Code Analysis and Cppcheck could find automatically. Microsoft explains that C++ code analysis can detect issues such as buffer overruns, uninitialized memory, null pointer problems, and memory or resource leaks (Microsoft, 2025). Microsoft also recommends incorporating static analysis into the development and continuous integration process so security problems can be identified before they reach production (Microsoft, 2025).

Overall, this course changed the way I look at writing software. I still believe software needs to work correctly, but now I understand that getting the right answer on the screen is only part of the job. Secure software needs standards, testing, risk assessment, access control, and continued monitoring. What really brought it home for me is realizing that secure coding follows the same basic problem-solving process I have used for years in other types of work: inspect the problem, understand the risk, use the right tools, correct the cause instead of just the symptom, and check your work before calling the job finished. NIST's Secure Software Development Framework follows that same overall idea by recommending security practices throughout development rather than waiting until the software is finished (Souppaya et al., 2022).

## References

Joint Task Force Transformation Initiative. (2012). *Guide for conducting risk assessments (NIST Special Publication 800-30, Revision 1).* National Institute of Standards and Technology.

Microsoft. (2025). *C++ code analysis in Visual Studio.* Microsoft Learn.

Microsoft. (2025). *Build reliable and secure C++ programs.* Microsoft Learn.

Rose, S., Borchert, O., Mitchell, S., & Connelly, S. (2020). *Zero trust architecture (NIST Special Publication 800-207).* National Institute of Standards and Technology.

Software Engineering Institute. (2025). *How this coding standard is organized.* Carnegie Mellon University.

Souppaya, M., Scarfone, K., & Dodson, D. (2022). *Secure Software Development Framework (SSDF) version 1.1: Recommendations for mitigating the risk of software vulnerabilities (NIST Special Publication 800-218).* National Institute of Standards and Technology.
