#include<iostream>

using namespace std;

int main(){
    int Arr[5];             // static memory
    int *ptr = NULL;
    // step 1: 
    ptr = new int[5];

    //step 2 : use the memory

    //logic

    // step3 : de allocate the memory

    delete []ptr; 
    return 0;
}