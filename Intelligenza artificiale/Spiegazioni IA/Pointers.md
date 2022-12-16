# Pointers

A pointer is a variable that stores a memory address of another variable. To declare a pointer in C++, you must first identify the data type of the variable the pointer will point to. Let's say we want to declare a pointer that points to an integer variable. We would type:

int *pointerName;

This declares a pointer called "pointerName" that points to an integer variable. To use the pointer, we must first assign it a memory address of an integer variable. We do this using the "&" operator:

```cpp
int x = 10;
```

```cpp
pointerName = &x;
```

Now, "pointerName" is pointing to the memory address of the "x" variable, which has the value of 10. We can access the value of "x" using the pointer by dereferencing the pointer:

int y = *pointerName;

Now, the value of "y" is 10, which is the value of "x".

We can also use the pointer to modify the value of "x":

```cpp
*pointerName = 15;
```

Now, the value of "x" is 15, since the pointer was used to modify the value of "x" directly.



### Videos:

[What is the Difference Between a Pointer and a Reference C++](https://youtu.be/sxHng1iufQE)


```diff
! written by AI
```