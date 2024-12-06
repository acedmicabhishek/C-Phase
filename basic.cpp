#include <iostream>

// io : input / output stream
// this will copy all codes from iosctream into this file


int main (){

 // container type name = value ;

       int x = 4;  // x value is 4
       int y{5};   // y value is 5
    
 // conatiner : int , float , char, string
        
    float f = 1.2;
    char c = 'g';
    char string[] = "susimposter";


    int z = x + y;  // z is now equal to x+y that is 9 


    std::cout  << z << std::endl;
    std::cin  >> z ; 


    std::cout << z;


    return 0;
}