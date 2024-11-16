#include<stdio.h>

int Value = 11;     //extern
int Data;           //extern

void Demo(){
    int i = 10;             //auto
    static int j = 20;      //Static
    register int k = 30;    //Register

    printf("Inside Demo Function\n");
}
int main()
{
    int *p  = NULL;
    p = (int *)malloc(5 * sizeof(int));

    Demo();
    return 0;
}