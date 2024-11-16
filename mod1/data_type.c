#include<stdio.h>
#include<stdbool.h>

// Date type an variable

// variable name should be start with alphabet , underscore. but cant be start with speacial character , numbers . space is not allowed in variable . ket word can't be variable
int main(){
    int a = 24; // size 4 Byte
    float b = 15.65; // size 4 Byte
    char c = 's'; // 1 Byte
    double d = 14.34; // 8 Byte. same as float but take double pace of float
    bool e = true ; // 1 bit

// formate specifier
/*
short int %hd 
int %d
long int %ld
long log int %lld

char %c
string %s

float %f
double %lf
long double %Lf

unsigned short int %hu
unsigned int %u
unsigned long int %lu
unsigned long long int %llu
*/
    int x;
    scanf("%d", &x);
    printf("%d ", x);
}