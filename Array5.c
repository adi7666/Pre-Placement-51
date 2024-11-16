// … Drive keyboard shortcuts have been updated to give you first-letters navigation
#include<stdio.h>

int main()
{
  int Arr[3] = {10, 20,30};
  int no =2;

    // printf("%d\n",Arr[0]);  // 10
    // printf("%d\n",Arr[1]);  // 20
    // printf("%d\n",Arr[2]);  // 30
    // printf("%d\n",Arr[3]);  // 40

    // printf("%lu\n",sizeof(Arr));    // 16
    // printf("%lu\n",sizeof(Arr[0])); // 4
    // printf("%lu\n",sizeof(Arr[2])); // 4
    
    printf("%d\n",&(Arr[3]));     // 100
    printf("%d\n",Arr+3);    // 100
    printf("%d\n",Arr[0]); // 100
    // printf("%d\n",Arr[no]); // 108
    // printf("%d\n",Arr[3-1]); // 112

    return 0;
}