# 5-1 Case Study: Triple A and Defense in Depth

Michael Wood  
SNHU  
CS-405 Secure Coding  
Instructor: Aaron Demory  
Date Due: 08/02/2026

## Mother of All Breaches: Triple A and Defense in Depth

### Introduction

In January 2024, cybersecurity researcher Bob Dyachenko and the Cybernews research team discovered an exposed database called the Mother of All Breaches, or MOAB. The database contained about 12 terabytes of information and more than 26 billion records organized into approximately 3,800 folders. Leak-Lookup later stated that it held the database and that a firewall misconfiguration caused the exposure. The case made the news because of its massive size and the number of companies, government organizations, and individuals connected to the records (Cybernews, 2024).

### Description of the Breach

MOAB was both a security exposure and a collection of information from thousands of earlier breaches. This means that all 26 billion records were not newly stolen during one attack. The database included records connected to services such as LinkedIn, Twitter, Tencent, Adobe, Dropbox, and many others. Researchers also explained that duplicate records were likely included. Even so, placing this much information together in one searchable location made the data more useful to criminals (Cybernews, 2024).

The main target was personal and account information collected from previous breaches. The exposed information included credentials and other sensitive information that could be connected to individual users. Even older information can still be dangerous when people reuse usernames and passwords across multiple accounts.

### Immediate and Future Threats

The immediate threats included credential-stuffing attacks, phishing, identity theft, and unauthorized access to personal accounts. Credential stuffing happens when criminals use stolen usernames and passwords from one website to try logging into other websites. For example, a person who reused the same password for email, banking, and social media could have several accounts placed at risk.

The future threat is that criminals can combine information from different breaches to build a more complete picture of a person. This could make phishing messages more believable and help attackers target businesses or personal accounts. Cybernews recommended strong and unique passwords, password managers, and multifactor authentication to reduce these risks (Cybernews, 2024).

### Prevention and Security Policies

Developers and system administrators could have reduced the risk by using secure default settings, blocking public database access, reviewing firewall rules, and automatically scanning systems for configuration mistakes. Sensitive information should also be encrypted, and old information should be removed when it is no longer needed.

Policies for access control, secure configuration, encryption, data retention, incident response, and regular security testing could help prevent this type of exposure. NIST includes access control, audit and accountability, configuration management, identification and authentication, incident response, and system integrity as important security control areas (National Institute of Standards and Technology [NIST], 2020).

### Triple A and Defense in Depth

Authentication verifies that a person is who they claim to be. Administrator accounts should require strong passwords and multifactor authentication. Authorization controls what an authenticated user is allowed to access. The principle of least privilege would make sure each user could only access the files and systems needed to do their job. NIST explains that identity and access management should give the right people access to the right resources at the right time (NIST, n.d.).

Accounting keeps a record of what happens in the system. This includes administrator logins, firewall changes, database activity, and failed login attempts. Checking these records regularly could help find problems before they grow into a larger breach.

Defense in depth means using several security layers instead of depending on only one control. In this case, a firewall should not have been the only wall around the database. Authentication, authorization, encryption, network separation, monitoring, backups, and incident response could have provided additional protection. When one layer fails, the other layers can still reduce the damage.

### References

Cybernews. (2024, January 22). *Mother of all breaches reveals 26 billion records: What we know so far.*

National Institute of Standards and Technology. (2020). *Security and privacy controls for information systems and organizations: NIST Special Publication 800-53, Revision 5.*

National Institute of Standards and Technology. (n.d.). *Identity and access management.*
