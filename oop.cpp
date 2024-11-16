#include<iostream>

using namespace std;

class Arithmatic{
    public:
    int No1, No2;
    Arithmatic(int A, int B){
        No1 = A;
        No2 = B;
    }
    int Addition(){
        int ans =  0;
        ans = No1 + No2;
        return ans;
    }

    int Substraction(){
    int ans =  0;
    ans = No1 - No2;
    return ans;

}


};

int main(){
    int value1 =0, value2 =0, Ret =0;
    cout<<"Enter First Number "<<endl;
    cin>>value1;

    cout<<"Enter Second Number "<<endl;
    cin>>value2;

    Arithmatic obj(value1, value2);

    Ret = obj.Addition();
    cout << "Addition is "<< Ret <<endl;

    Ret = obj.Substraction();
    cout << "subraction is "<< Ret <<endl;
    
    return 0;
}