#include<iostream>
using namespace std;
class demo{
    public:
    int No1, No2, No3;
    demo(int A, int B, int C){
        No1 = A;
        No2 = B;
        No3 = C;
    }

};

int main(){
    demo obj1(11, 21, 33);
    return 0;
}