#include<iostream>
using namespace std;

class Hello{
    public:
    void fun();
};
class Demo{
    public:
    int i;
    private:
    int j;
    protected:
    int k;
    public:
    Demo(){
        i = 30;
        j= 40;
        k = 50;

    }
    friend void Hello::fun();
};
void Hello::fun(){
        Demo obj;
        cout<<obj.i<<endl;
        cout<<obj.j<<endl;
        cout<<obj.k<<endl;
    }


// void fun(){
    // // Demo obj;
    // cout<< obj.i<<endl;
    // cout<< obj.j<<endl;
    // cout<< obj.k<<endl;

// }
int main(){
    Hello hobj;
     hobj.fun();
    

    return 0;
}
//