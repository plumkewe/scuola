# Nasted loops

Nested loops in C++ are loops that are embedded within other loops. These loops can be used to iterate through multiple sets of data or to perform multiple operations on the same set of data. To use a nested loop, the inner loop will be repeated for each iteration of the outer loop. For example, to iterate through a two-dimensional array, you could use two for loops: the outer loop iterates through the rows, and the inner loop iterates through the elements of each row.

Syntax:

```cpp
for (int i = 0; i < outerLoopSize; i++) {
	
	for (int j = 0; j < innerLoopSize; j++) {
		
		// Statements to be executed
	}

}
```

```diff
! written by AI
```