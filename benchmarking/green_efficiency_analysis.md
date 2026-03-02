Green efficiency analysis: 

Meesurement Method

Using the function "clock()" from the time.h library, we mesure the processor time used in the process.
Using different variable "clock_t" we mesure: 
     Build data
	 Process
	 Reduce
	 Total
the total display is caculate by the substraction of the start_time minus the end_time. Next the different result is divide by the "Clock_per_sec function who give us the convert from tick into seconds;for the precise and consistent result. Doing this we enshure that the measures of the CPU are CPU cycles instead of the clock time.

Observed Performance Differences

The Dataset is fix at 50000, big enough to the execution time and remaining tractable. All algorithmic logic remained unchanged, ensuring that timing measurements reflected only the actual computational work performed.
the different result are: 
- **BUILD_DATA**: 0.000385 seconds (43.2% of total time)
- **PROCESS**: 0.000326 seconds (36.6% of total time)
- **REDUCE**: 0.000176 seconds (19.7% of total time)
- **TOTAL**: 0.000892 seconds

Relation Between Runtime and Energy Consumption
CPU time directly correlates with energy consumption in modern processors. When a CPU executes instructions, it dissipates power proportional to the clock frequency, voltage, and the number of active transistors switching states. Or Energy is equal at Power x time.
Since all three phases execute on the same hardware at identical clock frequencies and voltages, the phase consuming the most CPU time (`BUILD_DATA` at 0.000385 seconds) also consumes the most energy. The energy difference between `BUILD_DATA` and `REDUCE` is approximately proportional to their time ratio (2.2×). Over millions of executions or in data-center environments processing terabytes of data, this difference becomes significant. For instance, if this program ran 1 million times daily, `BUILD_DATA` would consume roughly 2.2 times more energy than `REDUCE`, translating to measurable differences in electricity costs and carbon emissions.

Limitations of the Experiment
Several factors limit the conclusions we can draw from this analysis. First, `clock()` measures CPU time only, not wall-clock time; system scheduling, context switches, and cache effects are not captured. Second, the dataset size (50,000 integers) is modest by modern standards; memory access patterns and cache behavior might differ significantly with larger datasets. Third, compiler optimizations (enabled via flags like `-O2` or `-O3`) can dramatically alter execution times; these results may not generalize across different compilation settings.

Additionally, the pseudo-random number generator used in `BUILD_DATA` may exhibit different performance characteristics on different CPU architectures. Finally, this experiment measures a single execution; statistical significance would require multiple runs to account for system variability.

## Practical Engineering Takeaway

The primary engineering insight is that **algorithmic complexity directly translates to energy consumption**. The data generation phase, despite being conceptually simple, consumed 43% of total energy due to its higher computational density. In green computing contexts—whether optimizing battery life in mobile devices, reducing data-center electricity costs, or minimizing carbon footprints—profiling and optimizing the most time-consuming phases yields the greatest returns.

This analysis demonstrates that clock-based instrumentation provides actionable insights for performance optimization. Engineers should prioritize optimizing phases that consume the most CPU time, as these directly impact energy efficiency and operational costs.