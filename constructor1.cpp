#include<iostream>/85
using namespace std;
class marvellous{
    public: int no1;
    int no2;

    marvellous(){
        cout<< "Inside defalt constructor"<<endl;
        no1 =0;
        no2=0;
    }
    marvellous(int A, int B){
        cout<<"Inside Parameterised Constructor"<<endl;
        no1 = A;
        no2 = B;
    }
    ~marvellous(){
        cout<<"Inside Destructor"<<endl;
    }
    void fun() {
        cout<< "Inside fun"<< endl; 
    }  
};
int main(){
    marvellous mobj;
    marvellous mobj2(11,12);
    // mobj2.fun();
    return 0;
}