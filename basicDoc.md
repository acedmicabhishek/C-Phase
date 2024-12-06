# The program will start from entry point

`main()`
 
 It has two types
`int main`
`int void`
        


# The program will stop at end point
```return 0;``` 
 `error code` : `1` and `0` 

`1` : `something aint right`

`0` : `perfect`

Both will finish but one with error code saying something might be wrong 


# Code expamle : 
```
int main (){

    return 0;
}
```

# What is scope 
restricting some function or workflow within a object

# Example
```
z , y , m
 hey(a, b) {
a and b are only available
} 
```

# Variable declaration
1st method : copy 
 equal to `=` is used to copy 

for example
```
int x = 5 ;
// 5 will be copied to x ;
```

2nd method : litral
{} anything inside will be declared without making a copy 
`int x{5} ;`

# Iostream
this is a toolbag that contains feature like input and output


# Print 
To print we use `cout<<`
we access cout from a cxx scope that is std

this is how we write 

```std::cout <<``` to print

`<<` used along with `cout` 

# Cout example : 
 
 int main (){


 }

# Intake from user
`std::cin>>`

both cin and cout is a feature of iostream

# example code : 
```
#include <iostream>

int main(){
int x = 5;
int y = 9;
int z = x + y ;

std::cout<< z ;

return 0;
}
```