#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;

    Complex(){
        this->real = 0;
        this->img = 0;
    }
    Complex(int a,int b){
        this->real = a;
        this->img = b;
    }
    void print(){
        cout<<this->real<<endl;
        cout<<this->img;
    }
};

int main()
{   Complex c(10,20);
    int *ptr = reinterpret_cast<int *>(&c);

    *ptr = 100;
    ptr++;
    *ptr = 50;
    c.print();
    return 0;
}



