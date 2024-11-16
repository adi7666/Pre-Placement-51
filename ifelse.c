#include<stdio.h>
int main(){
    int No =0, res =0;
    printf("enter number : \n ");
    scanf("%d", &No);

    res = No %2;
    if(res == 0){
        printf("It is even NUmber");

    }else{
        printf("it is odd number :");

    }
    
    return 0;
}