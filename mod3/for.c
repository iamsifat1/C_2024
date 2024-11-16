#include<stdio.h>

int main(){
    printf("Before for \n");

    for(int i =0; i<10; i++){
        printf("Inside for %d \n", i);
    }

    printf("After for \n");

    for(int j=10; j>0; j--){
        printf("value is %d \n", j);
    }
}