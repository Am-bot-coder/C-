#include<iostream>
using namespace std;

template<typename T>


void swap(T *a, T *b){
    T temp;
    temp = *a;
    *a=*b;
    *b = temp;
}
//swap common template for all datatypes
//we can exchange class also 


int main()
{
    int a,b;
    double c,d;
    char y,z;
        
    a = 10;b=20;
    c = 40.04;d=50.04;
    y ='A';z='B';
    swap<int>(&a,&b);
    swap<double>(&c,&d);
    swap<char>(&y,&z);

    cout<<a<<" "<<b<<endl;
    cout<<c<<" "<<d<<endl;
    cout<<y<<" "<<z<<endl;

    return 0;
}
