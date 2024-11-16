#include<iostream>
using namespace std;
class Base{
    public:
    int a,b;

    //1000
    int Addition(int No1, int No2){                 //concrete Method
        return No1 +No2;
    }
    virtual int Substraction(int No1, int No2) = 0; //Abstrat method
};
class Derived : public Base{
    public:
    int x,y;

    // 2000
    int Substraction(int No1, int No2){             //concete Method
        return No1 - No2;
    }
    // 3000
    int Multiplication(int No1, int No2){
        return No1 * No2;
    }
    
};
int main(){
    // Base bobj;       Not Allowed
    Derived dobj;

    cout<<"Addition is: "<<dobj.Addition(11, 10)<<endl;
    cout<<"Substratio is :"<<dobj.Substraction(11,10)<<endl;
    cout << "Multiplication is :"<<dobj.Multiplication(11,10)<<endl;
    return 0;
}