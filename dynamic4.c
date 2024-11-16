#include<stdlib.h>  // standard library 
#include<stdio.h>   //standard input output

int main(){
    int *ptr = NULL;
    ptr = (int *)malloc(5 *  sizeof(int));
    // for increase in memory
    ptr = (int * )realloc(ptr, 7*sizeof(int));      //case 1

    // for decrrease in memory
    ptr = (int * )realloc(ptr, 3*sizeof(int));      //case 2

    ptr = (int *)realloc(NULL, 5*sizeof(int));     // works like malloc function

    ptr = (int *)realloc(ptr,0);           // this works like free function
    return 0;
}

//d(c=#&$Wc)