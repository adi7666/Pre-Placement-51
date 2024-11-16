#include<stdio.h>

// function Defination
int Addition(int value1, int value2){
    int result =0;                                  //local variable
    result = value1 + value2;
    return result;
}
int main(){                                         //entry point 
    int No1 = 0, No2= 0, ans=0 ;                    //Local Variable
    printf("Enter first new no : \n");
    scanf(" %d", &No1);

    printf("Enter Second Neew No : \n");
    scanf("%d", &No2);
    ans= Addition(No1, No2);                        // Function call

    printf("Addition is : %d\n", ans);

    return 0;
}