Green efficiency analysis: 

Meesurement Method

Using the function "clock()" from the time.h library, we mesure the processor time used in the process.
Using different variable "clock_t" we mesure: 
     Build data
	 Process
	 Reduce
	 Total

the total display is caculate by the substraction of the start_time minus the end_time. Next, the different result is divide by the "Clock_per_sec function who give us the convert from tick into seconds;for the precise and consistent result. Doing this we enshure that the measures of the CPU are CPU cycles instead of the clock time.

Observed Performance Differences

The Dataset is fix at 50000, big enough to the execution time and remaining tractable. All algorithmic logic remained unchanged, ensuring that timing measurements reflected only the actual computational work performed.
the different result are: 
- **BUILD_DATA**: 0.000385 seconds (43.2% of total time)
- **PROCESS**: 0.000326 seconds (36.6% of total time)
- **REDUCE**: 0.000176 seconds (19.7% of total time)
- **TOTAL**: 0.000892 seconds

Relation Between Runtime and Energy Consumption

CPU time directly correlates with energy consumption. When a CPU executes instructions, it dissipates power proportional to the clock frequency, voltage, and the number of active transistors switching states. Or Energy is equal at Power x time (E = P x t).
Since all three phases execute on the same hardware, same clock and same energy, the phase consuming the most CPU time (`BUILD_DATA` at 0.000385 seconds) also consumes the most energy. The energy difference between `BUILD_DATA` and `REDUCE` is 2.2×. Over many executions or in data-center environments processing terabytes of data, this difference becomes significant.If this program ran millions times daily, `BUILD_DATA` would consume 2.2 times more energy than `REDUCE`, translating measurable differences in electricity costs and carbon emissions.

Limitations of the Experiment

The function `clock()` measures CPU time only, not wall-clock time.
The dataset size (50,000 integers) is small by modern standards; memory access patterns and cache behavior will be different with bigger datasets.
Compiler optimizations can change execution times; these results may not generalize across different compilation settings.

The random number generator used in `BUILD_DATA` may exhibit different performance characteristics on different CPU architectures. 
Finally, this experiment measures a single execution; statistical significance would require multiple runs to account for system variability.

Practical Engineering Takeaway

In green computing contexts—whether optimizing battery life in mobile devices, reducing data-center electricity costs, or minimizing carbon footprints—profiling and optimizing the most time-consuming phases yields the optimize returns.

This analysis demonstrates that clock-based instrumentation provides actionable insights for performance optimization. This show that we should prioritize optimizing phases that consume the most CPU time, as these directly impact energy efficiency and operational costs.