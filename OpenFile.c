#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
    char FlieName[20];
    int FD =0;
    printf("Enter The Flie name that you want to open : \n");
    scanf("%s", FlieName);

    FD = open(FlieName, O_RDWR);
    if(FD == -1)
    {
        printf("Unable to Open the flie\n");

    }
    else
    {
        printf("Flie is Succesfully open with FD : %d\n", FD);
    }
    close(FD);  
    return 0;
}

// Read mode   O_RDONLY
// Write Mode  O_WRONLY