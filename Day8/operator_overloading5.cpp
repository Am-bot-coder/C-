#include<iostream> 
using namespace std; 

//overload the <<(insertion operator) Twice
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
    friend ostream& operator<<(ostream &out,Complex &c1);
};
ostream& operator<<(ostream &out,Complex &c1){
    out<<c1.real<<endl;
    out<<c1.imag<<endl;
    return out;
}

int main()
{
    Complex c1;
    c1(10,20);
    Complex c2(40,80);
    cout<<c1<<endl<<endl<<c2;

    return 0;
}
