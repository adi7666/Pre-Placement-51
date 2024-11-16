#include<iostream>
using namespace std;

class demo{
    public :
    void Addition(int *A){
        // return A+B;
        cout<<"Fiors\n";
    }
    // double Addition(double A, double B){
    //     return A+B; 
    // }
    // void Addition(int A, int B ){
    //     // return A+B+C;
    //     cout<<"Second";
    // }
    void Addition(float *A){
        // return A+B;
        cout<<"second\n";
    }
    void Addition(int no){
        // return A+B;
        cout<<"third\n";
    }

};

int main(){
    int no =11;
    float f = 3.14;
    demo obj;

    obj.Addition(no);

    obj.Addition(&no);
    // obj.fun(&f);
    return 0;
}

/*
//we can 
void Fun(int A, int B);                     fun@2ii
void fun(int A, int B , int C)              fun@3iii

void fun(int A, int B);                     fun@2ii
void fun(float A, float B);                 fun@2ff

void fun(int A, float B, double C)          fun@3ifd
void fun(double A, float B, int C)          fun@3dfi

//we cannot
void fun(int A, int B);
int fun(int A, int B)
*/