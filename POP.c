#include<stdio.h>
int Addition(int No1 , int No2){
    int ans =  0;
    ans = No1 + No2;
    return ans;

}
int Substraction(int No1 , int No2){
    int ans =  0;
    ans = No1 - No2;
    return ans;

}
int main(){
    int value1 =0, value2 =0, iRet = 0;
    printf(" Enter First no. : \n");
    scanf("%d", &value1);
    printf(" Enter second no. : \n");
    scanf("%d", &value2);
    iRet = Addition(value1, value2);
    printf("Addition is %d\n", iRet);

    iRet = Substraction(value1, value2);
    printf("sustraction is %d\n", iRet);


    return 0;
}