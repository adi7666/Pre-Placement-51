#include<iostream>
using namespace std;

class demo{
    public:
    int No1,No2;
    demo(int A, int B){
        No1 = A;
        No2 = B;
    }
};
demo operator*(demo op1, demo op2){
    return demo(op1.No1*op2.No1, op1.No2*op2.No2);
}
int main(){
    demo obj1(10, 20);
    demo obj2(30, 40);

    demo obj3(0,0);
    obj3 = obj1 * obj2;
    cout<<obj3.No1<<"\t"<<obj3.No2<<endl;
    return 0;
}