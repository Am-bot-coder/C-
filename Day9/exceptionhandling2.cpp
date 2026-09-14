#include<iostream>
using namespace std;

class InvalidArithmaticException{
    private:
    string message;
    public:
    InvalidArithmaticException(){
        this->message = "No error specify";
    }
    InvalidArithmaticException(string message){
        this->message = message;
    }
    void printError(){
        cout<<this->message<<endl;
    }
};

class Complex{
    private:
    int real;
    int imag;
    public:
    Complex(){
        this->real = 0;
        this->imag = 0;
    }
    Complex(int real,int image){
        this->real = real;
        this->imag = imag;
    }

    int getReal(){
        return this->real;
    }
    int getImag(){
        return this->imag;
    }
    void setReal(){
        cout<<"Enter the real value -->";
        int r;
        cin>>r;
        if(r<0){
            throw InvalidArithmaticException(" Invalid Real number");
        }
        this->real = r;
    }
    void setImag(){
        cout<<"Enter the imag value -->";
        int i;
        cin>>i;
        if(i < 0){
            throw InvalidArithmaticException(" Invalid Imaginary number");
        }
        this->imag = i;
    }
};

void acceptRecord(Complex &other){
    try{
        
        other.setReal();
        other.setImag();
    }
    catch(InvalidArithmaticException ex){
        ex.printError();
    }
}
void printRecord(Complex complex)
{
    cout<<"Real : "<<complex.getReal( )<<endl; 
    cout<<"Imag : "<<complex.getImag( )<<endl; 
}

int main()
{
    Complex complex;
    ::acceptRecord(complex);
    ::printRecord(complex); 
    return 0;
}