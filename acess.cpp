#include<iostream>

using namespace std;

class demo{
    public :
    int A;
    private:
    int B;
    public:
    demo(){
        A =11;
        B= 32;
    }
    void fun(){
        cout<<"Value Of A \n"<<A<<"\n";   //Allowed
        cout<<"Value Of B \n"<< B<<"\n";  // Allowed
    }
};

int main(){
    demo obj;
    obj.fun();                         //Allowed
    cout<<"Value Of A"<<obj.A<<"\n";   //Allowed
//    cout<<"Value Of B"<< obj.B<<endl;  //Not Allowed

    return 0;
}