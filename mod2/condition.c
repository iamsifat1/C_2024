#include<stdio.h>
#include<stdbool.h>

int main(){
    int a =15;
    printf("Before if \n");

    if (a < 10)
    {
        a += 10;
        printf("Hello if \n");
    }
    printf("%d \n", a);


int x = 45;

if(x <= 50 )
{
    printf("Buy 4 eggs \n");
    printf("Take %d taka \n", 50-x);
}else{
    printf("Buy 2 eggs \n");
}

if (a<5)
{
    printf("a is less than 5 \n");
}else if (a<10)
{
    printf("a is less than 10 \n");
}else if (a<20)
{
    printf("a is less than 20 \n");
}else if (a<50)
{
    printf("a is less than 50 \n");
}else{
    printf("a is less than 100 \n");
}

// Nested if else

int day = 6 ;

if (day==2 && day!=0)
{
    bool isBoatAvailable =false;
    if (isBoatAvailable)
    {
        printf("going to Tanguar Haur \n");
    }
    else{
        printf("going to shrimangal \n");
    }
}
else if (day==4 && day != 0)
{
    bool isShipAvailable =true;
    if (isShipAvailable)
    {
        printf("going to Saint martin \n");
    }else{
        printf("going to Cox's Bazar \n");
    }
    
}else{
    printf("Stay home");
}



    return 0;
}


