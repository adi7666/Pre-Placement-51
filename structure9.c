#include<stdio.h>

    struct demo
    {
        int no;
        struct demo *ptr;
        /* data */
    };
    

int main (){
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    obj1.no= 21;
    obj2.no= 32;
    obj3.no= 90;

    obj1.ptr = &obj2;
    obj2.ptr = &obj3;
    obj3.ptr = NULL;

    return 0;
}