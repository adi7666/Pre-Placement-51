#include<iostream>
using namespace std;

class Base{
    public :
    int i,j;
    void fun(){                             //DEfination
        cout << "Inside the Base  fun\n";
    }
    void Gun(){
        cout << "Inside Base Gun"<<endl;
    }
    void Sun(){
        cout<<"Inside bassw SUn"<<endl;
    }
    void Dun(){
        cout<<"Inside base run"<<endl;
    }
};
class Derived : public Base{
    public:
    int x,y;
    void fun(){                                 
        cout << "Inside the Derived function \n";
    }
    void sun(){                                 
        cout << "Inside the Derived sun \n";
    }void gun(){                                 
        cout << "Inside the Derived  gun function \n";
    }void Mun(){                                 
        cout << "Inside the Derived Mun function \n";
    }
};
int main(){
    //  cout <<sizeof(Base)<<endl;             //1 byte
    // Base bobj;
    Derived dobj;
    Base *bptr = NULL;
    bptr = &dobj;   //UPCASTING

    bptr -> fun();      //Base Fun
    bptr -> Gun();
    bptr -> Sun();
    bptr -> Dun();
    // bptr -> Mun();   //ERROR
    

    return 0;
}