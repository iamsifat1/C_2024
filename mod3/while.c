#include<stdio.h>

int main(){

    printf("Before while loop \n");
    int i = 0;

    while(i<100){
        printf("Inside while loop %d \n",i);
        i++ ;
    }

    printf("After while loop\n");

    printf("Do while start from here \n");

    int j = 100;
    do{
        printf("Inside do %d \n", j); // execute one time before checking condition
        j++;
    }while(j<10);
}