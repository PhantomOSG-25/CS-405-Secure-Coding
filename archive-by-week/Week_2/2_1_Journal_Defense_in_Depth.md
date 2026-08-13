# 2-1 Journal: Defense in Depth (DiD)

**Michael Wood**  
**SNHU**  
**CS-405 Secure Coding**  
**Instructor: Aaron Demory**  
**Date Due: 07/12/2026**

Defense in depth means using several layers of protection instead of depending on one security control to stop every possible attack. I think of it much like pest control. One treatment may reduce a problem, but long-term control usually requires several steps, such as removing food and moisture sources, sealing entry points, applying the correct product, and monitoring the area afterward. Secure software works the same way. Input validation, authentication, access controls, encryption, logging, testing, and updates all protect different parts of the system.

There is a point where defense can become too deep. Adding more security layers may reduce risk, but every layer also adds cost, maintenance, and complexity. Too many controls can slow down an application, make it harder for employees or customers to use, and create more places where something can be configured incorrectly. The goal should not be to add every possible security feature. The goal should be to add enough protection for the type of data, system, and threats involved.

Time and money are major considerations because security tools, testing, training, and maintenance all require resources. Developers may also need additional time to write secure code and test unusual inputs instead of only checking whether the basic program works. Reputation is another important factor. A company may save money by cutting security work, but a data breach can cost much more through lost customers, legal problems, recovery expenses, and damage to public trust. Operationally, the organization must consider whether its security controls can be maintained and whether employees understand how to use them. A security system that is too difficult may cause users to find ways around it.

Defense in depth is different for every situation because each system has different risks. Important factors include the type of information being stored, who needs access, whether the application connects to the internet, the number of users, legal requirements, and the possible damage caused by a failure. Developers also need to consider how attackers could reach the system and which parts would be most valuable to them.

For example, a pest control company’s customer-management system could contain names, addresses, payment information, service records, chemical-use records, and technician schedules. That system would need strong passwords, limited employee access, secure payment processing, input validation, regular backups, software updates, and activity logging. A smaller internal tool that only tracks equipment may still need protection, but the security controls would not need to be as extensive.

From my experience, the best approach is to use practical layers that work together and can be maintained. Defense in depth should make an attack harder without making the system so complicated that it becomes unreliable or difficult to use.

> Archive note: Converted from the original Week 2 Word journal so the work can be read directly on GitHub.
