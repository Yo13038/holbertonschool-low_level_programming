A. STACK MANAGEMENT: stack_example
The test confirms that recursion is a deterministic and safe process as long as the stack limit is not reached.

Observation: Each stack frame consumes exactly 48 bytes.

Cleanup: Valgrind reports 0 bytes in 0 blocks at exit. Memory is automatically reclaimed by the CPU without programmer intervention.

Technical Note: The single 1024-byte allocation observed is the standard I/O buffer (stdout) managed by the libc.

B. HEAP MANAGEMENT: heap_example
This test illustrates the fragility of complex data structures.

Identified Error: A "definitely lost" leak of 6 bytes (the string "Alice").

Root Cause: The internal pointer Person->name was orphaned because the parent structure was freed prematurely.

Conclusion: Memory deallocation on the heap must be hierarchical (from the deepest nested pointers up to the surface structure).

C. SEGMENTATION VIOLATION: crash_example
This is the most critical case: an abrupt termination by the Operating System.

Signal: SIGSEGV (Signal 11).

Mechanism: An attempt to write to address 0x0. Valgrind identifies the error as an Invalid write of size 4.

Protection: The OS intercepts the invalid memory access and kills the process to protect the global system integrity.

Synthesis:
Following this test campaign, three fundamental rules of secure C programming have been validated:
Systematic Initialization: A pointer must never remain indeterminate. It should be either allocated or explicitly set to NULL.
The "One-to-One" Rule: Every call to malloc must have a corresponding free. For structures, this often requires a dedicated cleanup function (e.g., destroy_person()).
Post-Free Nullification: To prevent dangerous aliasing (Use-after-free), a pointer should be set to NULL immediately after calling free().

CONCLUSION:
The use of Valgrind made "invisible" errors visible (such as the 6-byte leak) and explained the exact cause of system crashes. This report proves that manual rigor is indispensable to complement the automatic safety checks provided by the compiler.