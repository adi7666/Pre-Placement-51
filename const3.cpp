#include<iostream>
using namespace std;

class Demo{
    public :
    int No1,No2;
    Demo(int A, int B){
        No1 = A;
        No2 =B;
    }
    void fun(){
        No1++;
        No2++;
    }
    void gun() const
    {
        // No1++;
        // No2++;
    }

};
int main(){
    Demo obj1(10,20);
    const Demo obj2(11,21);

    return 0;
}