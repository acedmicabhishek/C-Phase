# C++ Tutorial

## Basic String concept
anything inside double quotes will be string
`" "`
```cpp
std::cout<< "hey ace" ;
```

## Variables and Data Types

In C++, a **variable** is a storage location identified by a name. It holds a value that can be modified during the program's execution. 

### Data Types

It defines the box or containers 
primitive means it is baked into compiler

- **Primitive Data Types**:
  - `int` - Integer type, used for whole numbers.
  - `float` - Floating point type, used for single-precision decimal numbers.
  - `double` - Double precision floating point type, used for larger decimal numbers.
  - `char` - Character type, used to store single characters (typically a byte).
  - `bool` - Boolean type, used for true or false values.
  
- **Modifiers**:
  - `signed`, `unsigned`, `long`, and `short` can modify integer types.
  - Example: `unsigned int` or `long double`.

- **Derived Data Types**:
  - **Arrays**: A collection of similar data types.
  - **Pointers**: Variables that store the address of another variable.
  - **References**: Aliases for existing variables.

Example:
```cpp
int age = 25;
double price = 19.99;
char grade = 'A';
bool isActive = true;
```

# Input and Output (cin, cout)
C++ uses cin and cout for input and output operations, respectively. These are part of the standard library <iostream>, which must be included at the beginning of your program.
dont use namespace,  just go with std and access from it.

`std::cout<<`: Used to print output to the console.
`std::cin>>`: Used to take input from the user.
### Example:
```cpp
#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;  // Taking input from user
    std::cout << "Your age is: " << age << endl;  // Printing output
    return 0;
}
```

# Constants and Literals
Constants: Constants are fixed values that cannot be altered during the execution of the program. They are defined using the const keyword.
### Example:
```cpp
const int MAX_AGE = 100;
```
- Literals: A literal is a constant value used directly in code. Examples include:
- Integer literal: 5
- Floating-point literal: 3.14
- Character literal: 'a'
- String literal: "Hello"

### Example:
- there is two ways to do  that
1. copy that is `int x = 5;`
2. define literal value `int x{5};`

```cpp
int balls{8}; // without copy
int num = 5;   // 5 is an integer literal
float pi = 3.14; // 3.14 is a floating-point literal
```


# Operators
- Operators are symbols used to perfom some math

## Arithmetic Operators
Used for basic arithmetic operations:

`+` : Addition

`-` : Subtraction

`*` : Multiplication

`/` : Division

`%` : Modulus (remainder)

### Example:

```cpp
int sum = 5 + 3;    // sum is 8
int product = 4 * 2; // product is 8
int remainder = 10 % 3; // remainder is 1
```

## Relational Operators
Used to compare two values:
```cpp
== : Equal to
!= : Not equal to
< : Less than
> : Greater than
<= : Less than or equal to
>= : Greater than or equal to

```
```cpp
int a = 5, b = 10;
bool result = (a < b);  // result is true
```
## Logical Operators
- Used to perform logical operations (commonly in conditional statements):
```cpp
&& : Logical AND
|| : Logical OR
! : Logical NOT
```
```cpp
bool x = true, y = false;
bool result = (x && y); // result is false
```

## Bitwise Operators
Used to perform bit-level operations:
```cpp
& : Bitwise AND
| : Bitwise OR
^ : Bitwise XOR
~ : Bitwise NOT
<< : Left shift
>> : Right shift
```

```cpp
int x = 5;  // 101 in binary
int y = 3;  // 011 in binary
int result = x & y;  // result is 1 (0001 in binary)
```

## Assignment Operators
Used to assign values to variables:

= : Simple assignment
+= : Add and assign
-= : Subtract and assign
*= : Multiply and assign
/= : Divide and assign
%= : Modulus and assign

```cpp
int a = 5;
a += 3;  // a is now 8
a *= 2;  // a is now 16
```
## Increment/Decrement Operators
Used to increase or decrease the value of a variable by 1:

++ : Increment (increase by 1)
-- : Decrement (decrease by 1)
These can be used in prefix or postfix form:

++a (pre-increment): Increases the value before using it.
a++ (post-increment): Increases the value after using it.
### Example:
```cpp
int a = 5;
++a;  // a is now 6
a++;  // a is now 7
```

## Miscellaneous Operators
Other operators that don't fall into the previous categories:

sizeof: Returns the size (in bytes) of a data type or variable.
Ternary (?:): A shorthand for if-else statements. Syntax: condition ? expr1 : expr2;
```cpp
int size = sizeof(int);  // size will be the size of int in bytes
int result = (a > b) ? a : b;  // result is a if a > b, otherwise b
```

