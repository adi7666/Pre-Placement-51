#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
    char FlieName[20];
    int FD =0;
    printf("Enter The Flie name that you want to delte :");
  
    unlink(FlieName);
    
   
    return 0;
}

// Read mode   O_RDONLY
// Write Mode  O_WRONLY
// read + write mode   O_RDWR

