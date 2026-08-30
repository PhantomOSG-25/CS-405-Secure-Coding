# Module Six Journal: Don't Leave Security to the End

> Archive note: This entry preserves the topic and main ideas from the completed course journal. The original submitted journal document was not among the files available when this GitHub archive was assembled.

The main idea behind this journal was that security should be part of software development from the beginning instead of something added after the program is already finished.

That became one of the strongest themes of CS-405 for me. A program can work correctly and still contain security weaknesses. Input validation, memory protection, exception handling, automated analysis, unit testing, access control, and encryption all work better when they are considered during development.

I relate that to the way I handle problems in pest control. I would not complete an entire treatment and only afterward decide to inspect for entry points, conditions causing the problem, or safety concerns. Those checks have to happen throughout the job. Secure development works the same way.

Threat prevention also means testing more than the normal path. Good input should work, bad input should be rejected, and boundary conditions should be checked. That idea later became the tank-level unit-testing example used in Project Two.

The biggest lesson was simple: catching a problem early usually gives the developer more options and costs less than discovering it after the software has already been released.
