#include<iostream> 
using namespace std; 


class A{

    // you can declare the private constructor 
    //but if you do it you can make and object of that class
    public:

    //if you dont make any constructor compiler provide a constructor called default constructor
    A(void){
        cout<<"Constructor parameterless called"<<endl;
    }
    A(int a){
        cout<<"parameterised constructor called"<<endl;
    }
    A(int a,int b){
        cout<<"parameterised constructor oveloaded called"<<endl;
    }
};
int main(){
    A a;
    A b(10);
    A c(10,20);
}

