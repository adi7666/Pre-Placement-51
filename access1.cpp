#include<iostream>

using namespace std;
class base{
    public : 
    int i;
    private : 
    int j;
    protected: 
    int k;

    public :
    base(){
        i = 10;
        j = 20;
        k= 30;
    }
    void gun(){
        cout<<i<<endl;      //Allowed
        cout<<j<<endl;      //Allowed
        cout<<k<<endl;      // Allowed
                
    }
};

class derived : base
{
    public :
    void fun(){
        cout<<i<<endl;      //Allowed
        // cout<<j<<endl;      //not Allowed throws error
        cout<<k<<endl;      // Allowed
                
    }
};

int main(){
     base bobj;

     cout << bobj.i <<endl;
    //  cout << bobj.j << endl;
    //  cout << bobj.k << endl;

    return 0;
}