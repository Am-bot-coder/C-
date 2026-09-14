#include<iostream> 
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    Complex( void ) : real(0) , imag(0) 
    {   }
    Complex( int real , int imag ) : real(real) , imag(imag) 
    {   }
    //this = &c2 
    //other = c1 
    
    void printRecord( void)
    {
        cout<<"Real : "<<real<<endl; 
        cout<<"Imag : "<<imag<<endl; 
    }

    Complex(const Complex &other){
        this->real = other.real;
        this ->imag = other.imag;

        //shallow copy or deep copy code
    }
    
    
}; 

int main()
{
    Complex c1(10,20);
    Complex c2 = c1;
    c2.printRecord();
    return 0;
}
