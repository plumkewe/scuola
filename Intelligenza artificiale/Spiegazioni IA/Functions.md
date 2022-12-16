# Functions

In C++, functions are blocks of code that can be called to execute instructions. Functions take parameters, perform a task, and then return a value. In programming, functions are used to break up a program into more manageable chunks of code and to make code more reusable. Additionally, functions reduce the amount of code that needs to be written and make debugging easier, as the function can be tested and reused.

### Example 1:
```cpp
int addTwoNumbers(int x, int y) {

	return x + y;

}
```
### Example 2:
```cpp
void printHelloWorld() {

	std::cout << "Hello World!";

}
```
### Example 3:
```cpp
bool isOddNumber(int number) {

	bool result;

	if(number % 2 == 1) {
	result = true;

	} else {
	
	result = false;

	}

return result;

}
```

```diff
! written by AI
```