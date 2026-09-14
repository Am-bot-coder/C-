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
    Complex operator=(Complex other){
        this->real = other.real;
        this->imag = other.imag;
        return *this;
    }
    
};




int main()
{
    Complex c1(10,20);
    Complex c2,c3;

    c2 = c3 = c1;

    c2.printRecord();
    c3.printRecord();
    

    return 0;
}
