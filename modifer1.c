#include<stdio.h>
int main(){
    
    int a =10;
    short int b = -10;

    unsigned int c = 30;

    signed int d = 10;
    signed int e = -10;
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));

    return 0;
}