#include<iostream> 
using namespace std; 
class Complex 
{
    private: 
    int real; 
    int imag; 
    public: 
    //this = &c1 
    void initComplex(int real , int imag)
    {
        cout<<this<<endl;  
        this->real = real; 
        this->imag = imag; 
    }   
    void printRecord( void )
    {
        cout<<this<<endl;  
        cout<<"Real : "<<this->real<<endl;
        cout<<"Imag : "<<this->imag<<endl; 
    } 
}; 
int main( void )
{
    Complex c1; 
    c1.initComplex(10,20); // c1.initComplex(&c1, 10,20); 
    c1.printRecord( ); // c1.printRecord(&c1); 
    return 0;
}



//this in cpp  =  Classname * const this
// this is a keyword

//it is a constant pointer which having address of class

//this pointer created when member function
//(when we call the member function its first argument is by default address of class &class) 
//of specific class is called
//note-> dont try to push the address as parameter
//and destroy when it return the value to its own

//global function,static function,friend function cant have this pointer;
