#include<iostream>
using namespace std;

class Base{
    public :
    int i,j;
    void fun(){                             //DEfination
        cout << "Inside the Base  fun\n";
    }
};
class Derived : public Base{
    public:
    int x,y;
    void fun(){                                 //Refefination
        cout << "Inside the Derived function \n";
    }
};
int main(){
      cout <<sizeof(Base)<<endl;             //1 byte
    Base bobj;
    Derived dobj;
    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj;   //NOCASTING
    dptr = &dobj;   //NOCASTING
    bptr = &dobj;   //UPCASTING
    // dptr = &bobj;   //Down Casting

    return 0;
}