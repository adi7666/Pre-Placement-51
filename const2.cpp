#include<iostream>
using namespace std;
class Demo{
    public:
    int No1, No2;
    const int No3;
    const int No4;
    Demo() : No3(20), No4(40){
        No1 =10;
        No2 =30;
        
    }
    Demo(int A, int B,  int C, int D) : No3(C), No4(D)
    {
        No1 = A ;
        No2 = B;
    }
};
int main(){
    Demo obj1;
    cout<<obj1.No1<<"\t"<< obj1.No2 << "\t" <<obj1.No3 <<"\t"<<obj1.No4<<endl;

    Demo obj2(11, 21, 43, 23);
    cout<<obj2.No1<<"\t"<< obj2.No2 << "\t" <<obj2.No3 <<"\t"<<obj2.No4<<endl;

    obj1.No1++;
    obj1.No2++;
    // obj1.No3++;
    // obj1.No4;
    return 0;
}