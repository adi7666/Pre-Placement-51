#include<stdio.h>

struct demo
{
    int no;
    float f;
    /* data */
};

struct ppa
{
    int x;
    struct demo dobj;
    int y;
    /* data */
};

int main(){
    struct ppa obj;
    obj.x = 12;
    obj.y= 23;
    obj.dobj.no =11;
    obj.dobj.f = 3.12;
    
    return 0;
}

