#include<stdio.h>
#include<iostream>
using namespace std;
int num1 = 10;

int main(){
    int num1 = 20;
    cout<<"it prints ->"<<num1<<endl; //local variable gets precedance

    //To print the global variable
    cout<<"it prints ->"<<::num1<<endl;//global variables print

}


