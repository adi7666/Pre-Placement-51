#include<stdlib.h>  // standard library 
#include<stdio.h>   //standard input output

int main(){
    int *ptr = NULL;
    // step 1 : Allocate the memory
    ptr = (int *)malloc(5 *  sizeof(int));
    // step 2: usee the memory 
    // logic

    //step 3: de allocating the memory 
    free(ptr);

    return 0;
}