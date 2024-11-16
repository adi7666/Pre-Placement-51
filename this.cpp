#include<iostream>
using namespace std;
class demo{
    public:
    int No1, No2;

    demo(int A, int b){
        No1 = A;
        No2= b;
    }
    void display(int X){
        cout << "Value of No1 :"<<this ->No1<<endl;
        cout << "Value of No2 :"<<this ->No2<<endl;
        cout << "Value of No1 :"<<X<<endl;
    }
};

int main(){
    demo obj(11, 21);
    obj.display(11);        // display(&obj, 51 );      display
    return 0;
}