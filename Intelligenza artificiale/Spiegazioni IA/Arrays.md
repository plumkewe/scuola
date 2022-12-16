# Arrays

An array in C++ is a data structure that consists of a collection of items stored at continuous memory locations. Each item in the array can be accessed using an index, a number that represents its position in the array. Arrays can be used to store multiple values of the same data type or different data types.

To use an array in C++, you must first declare the array with a data type and size. The size of an array must be a constant and cannot be changed later. You can then access the elements of the array using their index numbers. For example, to access the first element of an array, you can use the array name followed by the index number in square brackets, e.g. array[0].

You can also use loops to iterate through the array, for example using a for loop. Inside the loop, you can access each element using the array's index. Finally, you can modify the elements of the array, for example to sort the array or add elements to the array.

Examples:


1. Declare an array of size 10 that stores elements of type int:
```cpp
int array[10];
```
2. Access the third element of the array:
```cpp
array[2]
```
3. Iterate through the array using a for loop:
```cpp
for (int i=0; i<10; i++) {

	cout << array[i] << " ";

}
```
4. Modify the elements in the array to sort it:
```cpp
for (int i=0; i<10; i++) {

	for (int j=i+1; j<10; j++) {
	
		if (array[i] > array[j]) {
		
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		
		}

	}

}
```

```diff
! written by AI
```