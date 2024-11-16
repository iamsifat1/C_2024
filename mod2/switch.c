#include<stdio.h>

int main(){
    int day = 7, hr = 4;

    switch(day){
        case 1 :
            printf("Saturday. \n");
            if (hr<12)
            {
                printf("%d AM", hr);
            }else{
                printf("%d PM", hr-12);
            }
            
            break;
        case 2 :
            printf("Sunday. \n");
            if (hr<12)
            {
                printf("%d AM", hr);
            }else{
                printf("%d PM", hr-12);
            }
            break;
        case 3 :
            printf("Monday. \n");
            if (hr<12)
            {
                printf("%d AM", hr);
            }else{
                printf("%d PM", hr-12);
            }
            break;
        case 4 :
            printf("Tuesday. \n");
            if (hr<12)
            {
                printf("%d AM", hr);
            }else{
                printf("%d PM", hr-12);
            }
            break;
        case 5 :
            printf("Wednessday. \n");
            if (hr<12)
            {
                printf("%d AM", hr);
            }else{
                printf("%d PM", hr-12);
            }
            break;
        case 6 :
            printf("Thursday. \n");
            if (hr<12)
            {
                printf("%d AM", hr);
            }else{
                printf("%d PM", hr-12);
            }
            break;
        case 7 :
            printf("Friday. \n");
            if (hr<12)
            {
                printf("%d AM", hr);
            }else{
                printf("%d PM", hr-12);
            }
            break;
        default:
            printf("Entered wrong day. \n");
        
    }
}