#include<stdio.h>
int main (){
    char s = 'd';
    int i =11;
    float f= 45.445;
    double d = 45.4765;
    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(f));
    printf("%lf\n", sizeof(d));
    printf("%d\n", sizeof(s));
  
    return 0;
}