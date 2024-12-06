# The program will start from entry point

`main()`
 
 it has two types
`int main`
`int void`
        


# the program will stop at end point
```return 0;``` 
 `error code` : `1` and `0` 

`1` : `something aint right`

`0` : `perfect`

both will finish but one with error code saying something might be wrong 


# code expamle : 
```
int main (){

    return 0;
}
```

# what is scope 
restricting some function or workflow within a object

# example
```
z , y , m
 hey(a, b) {
a and b are only available
} 
```

# variable declaration
1st method : copy 
 equal to "=" is used to copy 

for example
int x = 5 ;
// 5 will be copied to x ;

2nd method : litral
{} anything inside will be declared without making a copy 

int x{5} ;



now we use 
std::cout << to print 
std::cin << to take stuff

both cin and cout is a feature of iostream

example code : 

#include <iostream>

int main(){
int x = 5;
int y = 9;
int z = x + y ;

std::cout << z ;

return 0;
}

