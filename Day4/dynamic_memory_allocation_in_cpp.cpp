#include<iostream>
using namespace std;


int main(){
    int *ptr = new int[3];
    int *p2 = new int;


    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;

    *p2 = 200;
    cout<<*p2<<endl;

    for(int index=0;index<3;index++){
        cout<<ptr[index]<<endl;
    }

    delete[] ptr;
    delete p2;

    ptr = NULL;
    p2 = NULL;
    return 0;
}