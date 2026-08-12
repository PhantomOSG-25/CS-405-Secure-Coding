# Module Seven Journal: Consider the Motive for the Attack

> Archive note: This entry preserves the topic and main ideas from the completed course journal. The original submitted journal document was not among the files available when this GitHub archive was assembled.

This journal focused on looking beyond the technical vulnerability and considering why someone might attack a system in the first place.

Understanding motive can help a developer think more realistically about what needs protection. Someone may be looking for money, customer information, account access, company data, disruption, or simply an easy target. The reason matters because it can change which parts of a system are most attractive to an attacker and which controls deserve the most attention.

I connect that to risk assessment. In pest control, identifying the pest matters because different pests behave differently and require different approaches. Treating every problem exactly the same would not make sense. Security is similar. Understanding what an attacker wants and how they are likely to go after it helps the development team choose better protections.

For a new developer, I would explain that secure coding is not only about following a checklist. The developer also needs to think about how the program could be misused, what information is valuable, and what would happen if a control failed.

That way of thinking carried into the Green Pace policy, where risks such as SQL injection and hard-coded secrets received higher priority because they could expose information or provide access that an attacker would have a reason to pursue.
