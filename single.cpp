#include<iostream>

using namespace std;

class Base{
    public:
    int i, j;

    Base(){
        cout<< "Inside Base constructor\n";
        i = 10;
        j = 20;

    }
    ~Base(){
        cout<< "Inside Base Destructorr\n";
    }
    void fun(){
        cout << "Inside  fun function\n";
    }
};
class derived :public Base{
    public :
    int x, y;
    derived(){
        cout<< "Inside Base constructor\n";
        x = 30;
        y = 40;
    }
    ~derived(){
        cout<< "Inside Base derived Destructorr\n";
    }
    
    void gun(){
        cout << "Inside gun function\n";}
};
int main(){
    // Base obj;
    derived dobj;
    // cout << sizeof(obj)<<endl;
    cout << sizeof(dobj) << endl;
    cout<< "Inside Main function\n";
    cout << dobj.i<<endl;
    cout << dobj.j<<endl;
    cout << dobj.x<<endl;
    cout << dobj.y<<endl;

    dobj.fun();
    dobj.gun();

    return 0;
}