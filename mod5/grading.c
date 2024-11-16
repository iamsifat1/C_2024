#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your mark:");
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        printf("Congratulations!You have passed.\n");
        if (marks >= 80)
        {
            printf("You have got A+ Grade.\n");
            if (marks>=90)
            {
                printf("Congratulations! You have also got Scholarship.");
            }
            
        }
        else if (marks >= 70)
        {
            printf("You have got A Grade.\n");
        }
        else if (marks >= 60)
        {
            printf("You have got A- Grade.\n");
        }
        else if (marks >= 50)
        {
            printf("You have got B Grade.\n");
        }
        else if (marks >= 40)
        {
            printf("You have got C Grade.\n");
        }
        else if (marks >= 33)
        {
            printf("You have got D Grade.\n");
        }
    }else if (marks>=0 && marks<33)
    {
        printf("You have failed.");
    }else{
        printf("Invalid number\n");
    }
    

    return 0;
}