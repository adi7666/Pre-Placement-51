#include<stdio.h>

#pragma pack(1)
struct demo
{
    int i;
    float f;
    char ch;
    double d;
    /* data */
};
union hellos
{
    int i;
    float f;
    char ch;
    double d;
    /* data */
};
int main(){
    struct demo obh;
    union hellos hbh; 
    
    printf("Size Of union is : %lu\n",sizeof(hbh));
    printf("Size of Structure is : %lu\n", sizeof(obh));
    return 0;
}