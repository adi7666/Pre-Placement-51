#include<iostream>
using namespace std;

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
    friend void fun();
};
void fun(){
    Demo obj;
    cout<< obj.i<<endl;
    cout<< obj.j<<endl;
    cout<< obj.k<<endl;

}
int main(){
     fun();
    

    return 0;
}