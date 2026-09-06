#include<iostream>
#define SQR(x) x*x // this is a macro
//it is an command,runs very fast
//not type safe
// it actually replace the value instead of computation
using namespace std;


inline int square(int a){
    return a*a;
}
//type safe
//do computation
//if the code is complex inline function not consider as inline function
//consider as normal function
//if the normal function is simple compiler treat as inline function


int main(){
    cout<<"Sqr"<<SQR(2)<<endl; //4
    cout<<"Sqr"<<SQR(2+3)<<endl<<endl; //expected 25 but get 11

    cout<<"Sqr-->"<<square(2)<<endl; //4
    cout<<"Sqr-->"<<square(2+3)<<endl; //25
    
    return 0;
}