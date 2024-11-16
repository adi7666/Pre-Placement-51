#include<iostream>
using namespace std;

class Base{
    public :
    int i,j;
     void fun(){                             //1000
        cout << "Inside the Base  fun\n";
    }
    void Gun(){
        cout << "Inside Base Gun"<<endl;            //2000
    }
     void Sun(){
        cout<<"Inside bassw SUn"<<endl;             //3000
    }
     void Run(){
        cout<<"Inside base run"<<endl;              //4000
    }
};
class Derived : public Base{
    public:
    int x,y;
     void fun(){                                 
        cout << "Inside the Derived function \n";
    }
    void gun(){                                 
        cout << "Inside the Derived  gun function \n";
    } void Mun(){                                 
        cout << "Inside the Derived Mun function \n";
    }
     void Run(){
        cout<<"Inside Derived run"<<endl;
    }
};
int main(){
    cout <<"size of Basee class :"<<sizeof(Base)<<endl;       //8
    cout <<"size of Derived class :"<<sizeof(Derived)<<endl;  //16
    Derived dobj;
    Base *bptr = NULL;
    bptr = &dobj;   //UPCASTING

    bptr -> fun();      //Base Fun
    bptr -> Gun();
    bptr -> Sun();
    bptr -> Run();
    

    return 0;
}
