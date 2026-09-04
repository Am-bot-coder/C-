#include<iostream>
using namespace std;

void sum(int a , int b){
    cout<<"Sum1 = "<<a+b<<endl;
}

void sum(int a , int b,int c){
    cout<<"Sum2 = "<<a+b+c<<endl;
}

void sum(int a , float b){
    cout<<"Sum3 = "<<(float)a+b<<endl;
}

void sum(float a , int b){
    cout<<"Sum4 = "<<(float)a+b<<endl;
}


int main(){
    sum(10,20);
    sum(10,20,30);
    sum(10,20.5f);
    sum(20.5f,10);
    return 0;
}
