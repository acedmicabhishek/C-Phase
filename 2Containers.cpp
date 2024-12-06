#include <iostream>

int main() {
    // 1. Variables and Data Types
    int age = 25; // Integer type
    float height = 174.8; // float
    double price = 19.99; // Double precision floating point type
    char grade = 'A'; // Character type
    bool isActive = true; // Boolean type
    
    // 2. Output using std::cout
    std::cout << "Age: " << age << std::endl;
    std::cout << "height: " << height << std::endl;
    std::cout << "Price: " << price << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Active: " << isActive << std::endl;
    
    // 3. Constants and Literals
    const int MAX_AGE = 100; // Constant integer
    std::cout << "Max Age: " << MAX_AGE << std::endl;
    
    // Literal values
    int num = 5;   // 5 is an integer literal
    float pi = 3.14; // 3.14 is a floating-point literal
    std::cout << "Number: " << num << ", Pi: " << pi << std::endl;

    // 4. Operators
    // Arithmetic Operators
    int sum = 5 + 3;    // sum is 8
    int product = 4 * 2; // product is 8
    int remainder = 10 % 3; // remainder is 1
    std::cout << "Sum: " << sum << ", Product: " << product << ", Remainder: " << remainder << std::endl;
    
    // Relational Operators
    int a = 5, b = 10;
    bool result = (a < b);  // result is true
    std::cout << "Is a less than b? " << result << std::endl;
    
    // Logical Operators
    bool x = true, y = false;
    bool logicResult = (x && y); // result is false
    std::cout << "Logical AND result: " << logicResult << std::endl;

    // Bitwise Operators
    int bitResult = a & b;  // result is 0
    std::cout << "Bitwise AND result: " << bitResult << std::endl;
    
    // Assignment Operators
    int c = 5;
    c += 3;  // c is now 8
    c *= 2;  // c is now 16
    std::cout << "After assignments, c: " << c << std::endl;
    
    // Increment/Decrement Operators
    ++a;  // a is now 6
    a++;  // a is now 7
    std::cout << "After incrementing, a: " << a << std::endl;
    
    // Miscellaneous Operators
    int size = sizeof(int);  // size of int in bytes
    int maxVal = (a > b) ? a : b;  // ternary operator
    std::cout << "Size of int: " << size << " bytes, Max value: " << maxVal << std::endl;
    
    // 5. Input using std::cin
    int inputAge;
    std::cout << "Enter your age: ";
    std::cin >> inputAge;  // Taking input from user
    std::cout << "You entered age: " << inputAge << std::endl;

    return 0;
}
