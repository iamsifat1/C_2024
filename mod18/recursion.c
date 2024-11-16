#include<stdio.h>


void distribute(int roll, int x){
    if (x > 0)
    {
        printf("Roll %d recived 1 chocolate\n", roll);
        distribute(roll+1, x-1);
    }
    
}


int main(){

    distribute(1,10);
    return 0;
}