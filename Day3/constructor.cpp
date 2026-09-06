#include<iostream> 
using namespace std; 


class A{

    // you can declare the private constructor 
    //but if you do it you can make and object of that class
    public:
    A(void){
        cout<<"Constructor called automatically"<<endl;
    }
};
int main(){
    A a;
}

