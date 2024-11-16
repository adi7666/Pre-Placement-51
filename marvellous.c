#include<stdio.h>
int main(){
    // printf("Happy Independence Day \n");
    
 int num[ ] = {1,4,8,12,16};
 int *a,*b;
 int i;
 a=num;
 b=num+6;
 i=*a+1;
 printf("%d,%d,%d\n",i,*a,*b);
 

    // return 0;
}