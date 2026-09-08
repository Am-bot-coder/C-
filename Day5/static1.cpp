#include<iostream>
using namespace std;

void fun(){
static int num1=0;
num1++;
cout<<num1<<endl;
}

int main(){
    fun();
    fun();
    fun();
    
    return 0;
}

//static only get the memory once
//but it can only accesible in their scope