#include<stdio.h>
#include<math.h>

// int main(){
//     int a = 5, b = 3;
//     printf("%f \n", 5.0/3);
//     printf("%d\n", 5%3);
//     printf("%d\n", a*b);

//     long long x = 100000;
//     long long y = 100000;
//     long long result;
//     result = x*y;
//     printf("%lld \n", result);
//     return 0;
// }

int main(){
    int a= 50;

    printf("%d \n", a -= 10 );
    printf("%d \n", a += 10 );
    printf("%d \n", a *= 10 );
    printf("%d \n", a /= 10 );
    printf("%d \n", a %= 10 );

    printf("%d", ++a);

    return 0;
}