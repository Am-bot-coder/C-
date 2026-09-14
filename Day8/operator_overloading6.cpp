#include<iostream> 
using namespace std; 

//overload the >>(extraction operator) Two time
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ) : real(0) , imag(0)
    {   }
    Complex(int real , int imag) : real(real) , imag(imag)
    {   }
    void printRecord( void )
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imag : "<<imag<<endl; 
    }
    void operator()(int a,int b){
        this->real =a;
        this->imag = b;
    }
    friend istream& operator>>(istream &cin,Complex &one);
};

istream& operator>>(istream &in,Complex &one){
    cout<<"Enter the real value -->";
    in>>one.real;
    cout<<"Enter the Imag value -->";
    in>>one.imag;
    return in;
}


int main()
{
    Complex c1,c2;
    cin>>c1>>c2;

    c1.printRecord();
    c2.printRecord();

    return 0;
}
