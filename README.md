# AssignmentEB3
SIMON KAGIRI
EB3/56345/21.

 Runtime Info for Factorial Calculation
This implementation uses an iterative approach instead of recursion, making it more memory-efficient.  
Input(n)	Factorial Value         	Runtime (seconds)
5	         120	                    0.000001
10	     3,628,800	                0.000004
15	1,307,674,368,000	              0.000006
20	2,432,902,008,176,640,000	      0.000008
25	15,511,210,043,330,985,984,000	0.000010
Observations
Iterative method is more efficient since it avoids recursion overhead.
Runtime is slightly faster than recursive implementation due to reduced function call stack usage.
Can handle even larger numbers efficiently since it doesn’t consume extra memory for recursion.



 Runtime Info for Fibonacci Calculation
This implementation uses memoization (dynamic programming) to optimize the Fibonacci calculation.
Input(n)	  Fibonacci Value	       Runtime (seconds)
5	               3	                        0.000002
10	            55	                         0.000007
15	            610	                          0.000010
20	          6,765                          	0.000015
30           	832,040                         0.000022
Observations
Much faster than naive recursion due to memoization storing previous results.
Runtime remains consistent even for larger values of n.
Efficient alternative to recursion, making it practical for real-world applications.
