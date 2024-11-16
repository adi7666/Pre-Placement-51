#include<iostream>

using namespace std;

int main(){
    int No1 =10;
    const int No2 =10;
    No1++;        //Not Allowed
    // No2++;        //NOT Allowed

    No1 = 21;
    // N02 =21;      //Not Allowed
    return 0;
}