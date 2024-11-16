#include<stdio.h>

#pragma pack(1)
struct  demo
{
    int no;     //4
    float f;    //4
    double d;   //8
    int i;      //4
    /* data */
};              // total size is : 20 byte


int main(){
    struct demo obj1;

    printf("%d\n", sizeof(obj1));
    obj1.no =11;
    obj1.f = 3.10;
    obj1.d = 6.9999;
    obj1.i =21;

    printf("%d\n",  obj1.no);
    return 0;
}