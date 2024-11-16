#include<stdio.h>

// no return + parameter

void add(int a, int b){
    int sum = a + b;
    printf("%d\n", sum);
}

void alphacheak(char c){
    if (c>= 'a' && c<= 'z')
    {
        printf("lower case\n");
    }else{
        printf("Upper case");
    }
    
}

int main(){

    int x, y;
    scanf("%d %d", &x, &y);
    add(x,y);

    alphacheak('s');
    return 0;
}