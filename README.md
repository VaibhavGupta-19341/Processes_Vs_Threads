# Processes_Vs_Threads
Understand the differences in working and usage of Processes and Threads

We know that fork() results in complete duplication of all process memories, while pthread create() results only in partial. 
This exercise is to write a program where a global variable is initialized to a value of say 10.

At some point, the program fork()s and creates a child process. 
The parent process increments the global variable linearly upto 100 (i.e. 11, 12, 13....,100).
The child process does the opposite, i.e. decrements linearly upto -90. 
Both the parent and child processes should print the value of the variable.

Repeat the same using pthread create(), where the parent threat increments the global variable linearly upto 100 (i.e. 11, 12, 13....,100). 
The child threat does the opposite, i.e. decrements linearly upto -90. Both the parent and child threads should print the value of the variable.
