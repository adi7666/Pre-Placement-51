#include<stdio.h>

int main(){
    char ch = 'A';
    int i = 11;
    float f = 90.22;
    double d = 90.00009;


    char *cp = &ch;
    int *io = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = NULL;

    

    printf("%c\n", *cp);
    printf("%d\n", *io);
    printf("%f\n", *fp);
    printf("%f\n", *dp);
    vp = &ch;
    vp = &i;
    printf("%c\n", *(char *)vp);
    printf("%d\n", *(int     *)vp);
    

    return 0;

}