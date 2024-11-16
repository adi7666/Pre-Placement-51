#include<stdio.h>
#pragma pack(1)
struct demo
{
    int no;     //4 bytes
    float f;    //4 bytes
    int arr[3]; //12 bytes
    int X;      //4bytes
   // char ch;   
};              


int main(){
    struct demo obj;
    printf("%d\n", sizeof(obj));
    obj.no = 11;
    obj.f= 20.22;
    obj.X = 21;
    obj.arr[0] = 10;
    obj.arr[1] = 20;
    obj.arr[2] = 30;
    return 0;
}