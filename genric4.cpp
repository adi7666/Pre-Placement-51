#include<iostream>

using namespace std;
template<class T>   
T Addition(T No1, T No2){
    T Ans;
    Ans = No1 + No2;
    return Ans;
}
int main(){
    float A =10.90f, B = 11.60f;
    cout<< Addition(A,B)<<endl;

    int X = 10, Y = 11;
    cout<< Addition(X,Y)<<endl;

    double p = 90.99, q = 78.90;
    cout<< Addition(p,q)<<endl;
    
    return 0;
}