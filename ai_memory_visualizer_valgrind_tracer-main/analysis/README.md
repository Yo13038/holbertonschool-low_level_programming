Objective
Develop an explicit and correct mental model of how memory behaves in C programs by externalizing it into concrete memory maps, and validating those maps against real program behavior.

This task targets a common failure mode: believing you understand memory while reasoning implicitly. That is not sufficient at this stage.

Context
When working with pointers, most reasoning errors happen silently. You assume a variable is still valid, assume memory still exists, or assume two pointers are independent when they are not.

To counter this, you will use AI tools to generate step-by-step memory visualizations, then critically evaluate and correct them. The goal is not to trust AI, but to force incorrect assumptions to surface.

Instructions
Navigate to the programs/ directory and identify the programs intended for analysis in this task.

For each program:

Compile it using the provided Makefile.
Run it normally (without Valgrind).
Identify key execution points where memory state changes, such as:

Function entry and exit
Recursive calls
Heap allocation and deallocation
Pointer assignments and reassignments
Use an AI tool to generate step-by-step memory maps that describe:

Stack frames and local variables
Heap allocations
Pointer values and aliases
Object lifetimes
Review the AI-generated explanations carefully and do not assume they are correct.

Manually correct any inaccuracies, missing details, or incorrect assumptions.

Write the final, corrected analysis in analysis/memory_maps.md.