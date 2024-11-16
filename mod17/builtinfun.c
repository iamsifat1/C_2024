#include<stdio.h>
#include<math.h>


int main(){
    double x = 10.49;

    printf("%.2lf\n", ceil(x));
    printf("%.2lf\n", floor(x));
    printf("%.2lf\n", round(x));

    int y = 25;

    printf("%.2lf\n", sqrt(y));
    printf("%.2lf\n", pow(y ,2));
}