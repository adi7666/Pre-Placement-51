#include<stdio.h>

struct demo
{
    int no;
    float f;
    int *p;
    float*q;
    /* data */
};


int main(){
    struct demo obj;
    int i = 11;
    float Marks = 30.8;
    obj.no =32;
    obj.f = 3.14;
    obj.p = &i;
    obj.q = &Marks;

    printf("%d\n", *(obj.q));
     printf("%d\n", *(obj.p));
     


    return 0;
}