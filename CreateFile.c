#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    char FlieName[20];
    int FD =0;
    printf("Enter The Flie name that you want to create : \n");
    scanf("%s", FlieName);

    FD = creat(FlieName, 0777);
    if(FD == -1)
    {
        printf("Unable to create the flie\n");

    }
    else
    {
        printf("Flie is Succesfully created with FD : %d\n", FD);
    }

    return 0;
}