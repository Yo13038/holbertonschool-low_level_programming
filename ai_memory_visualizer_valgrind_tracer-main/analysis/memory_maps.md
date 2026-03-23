
STACK ANALYSE: stack_example.c

Description:
This program show the creation and destruction of a stack frames with a recursive call.

Memory path:
Every call take about 48 bytes.The adresse go down telling us they go as plan.
Every variable don't impact each other. Change "depth=3" doesn't change "depth=2".

The adresse are automatically free at the end of the program. 


ALIASING ANALYSE: aliasing_example.c

Description:
This program create 2 pointers (a and b) point to the same adresse on the stack creating a "Use After Free".

Memory path:
After the free(a) adresse 0x1230on the stack is now free, the program try to reach b[3], when b still point to 0x1230.

Corection:
After the "free(a)", "b" become a dangling pointer. it is crucial to put a safety a = NULL and b = NULL right after the free to prevent accidental acces.

HEAP ANALYSE: heap_example

Description:
The program give memory to "person" on the heap. Each one point to a another adress "Name".

Memory path:
alice=0x5e4b11e596b0 name=0x5e4b11e596d0
bob=0x5e4b11e596f0 name=0x5e4b11e59710

Correction:
Free manualy the memory, the need is to free(alice ->name) first then free(alice). This prevent leak memory.

CRASH ANALYSE: crash_example.c

Description:
Segmentation fault: the program try to dereference a pointer NULL.

Memory path:
the pointer "ptr" is 0.
Try to read the adress 0x0, make the processor return a violation of segmentation signal (SIGSEGV).

Correction:
make a condition to prevent this, type : If(ptr != NULL).