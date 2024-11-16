#include<stdio.h>
int main(){
    int std =0;
    printf("enter your std : ");
    scanf("%d", &std);
    switch (std)
    {
    case 1: 
        printf("your exam at 8 am \n");    
        break;

         case 2: 
        printf("your exam at 9 am \n");    
        break;

         case 3: 
        printf("your exam at 10 am \n");    
        break;

         case 4: 
        printf("your exam at 11 am \n");    
        break;
    
    default:
        printf("you have entered wrong choice");
        break;
    }

    return 0;
}