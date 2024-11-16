#include<iostream>
using namespace std;

class Base{
    public :
    void fun(){                             //DEfination
        cout << "Inside the Base  fun\n";
    }
};
class Derived : public Base{
    public:
    void fun(){                                 //Refefination
        cout << "Inside the Derived function \n";
    }
};
int main(){
     cout <<sizeof(Base)<<endl;             //1 byte
     Base bobj;
     bobj.fun();
     Derived dobj;
     dobj.fun();

    return 0;
}