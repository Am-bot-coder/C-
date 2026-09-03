#include<stdio.h>

void print(); //global declaration
int main(void){
    // void print();    //local declaration
    print();
    return 0;
}
void print(void){
    printf("Hello World");
}

/* 
g++ d1_1.cpp
.\a.exe
>>>Hello World 
*/