#include<iostream>
using namespace std;

class Demo{
    public :
    int i, j;
    static int k;

    Demo(){
        i = 10;
        j = 20;

    }
    void fun(){
        cout<< "Inside non static fun"<<endl;
        cout<< this -> i<< endl;
        cout<< this -> j <<endl;
        cout<< k << endl;

    }
    static void gun(){
        cout << "Inside Non Static Gun"<<endl;
        cout <<k<<endl;
    }
};
int Demo :: k = 30;
int main(){
    cout << "Value Of K is :"<<Demo :: k<<endl;
    Demo::gun();
    Demo obj1;
    Demo obj2;

    obj1.fun();
    obj2.fun();

    cout <<"value of K using object :"<<obj1.k<<endl;
    cout <<"Value Of K using object :"<<obj2.k<<endl;

    return 0;
}