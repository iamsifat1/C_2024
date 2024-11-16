#include<stdio.h>
#include<stdbool.h>

// always give ans in boolean data type
int main(){
    int a = 5, b = 3 ;

    printf("%d \n", a == b);
    printf("%d \n", a < b);
    printf("%d \n", a > b);
    printf("%d \n", a <= b);
    printf("%d \n", a >= b);
    printf("%d \n", a != b);


    //logical operator

    bool result = !((2<5) && (4>5)); // all should be true
    //              true    false
    printf("%d", result);
    
    return 0;


}