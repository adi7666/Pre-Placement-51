#include<iostream>

using namespace std;
class demo{
    public :
    int A;
    int B;
    void fun(){
        cout<<"inside fun"<<endl;
    }
    void gun(){
        cout<< "Inside gun"<< endl;
    }
};
    

int main(){
    demo obj;
    cout<<sizeof(obj)<<endl;

    obj.A = 11;
    obj.B =21;
    obj.fun();
    obj.gun();
    cout<<obj.A<<endl;
    cout<<obj.B<<endl;

    return 0;
}
