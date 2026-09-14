#include<iostream> 

//if we dont make virtual constructor during upcasting only base class ddestructor called
//Base Constructor -> Derived Constructor -> Base Destructor

//but if we use virtual destructor
//Base Constructor -> Derived Constructor ->Derived Destructor--> Base Destructor

using namespace std; 
class Base 
{
    private: 
    int *bptr; 
    public: 
    Base ( void )
    {
        cout<<"Base class ctor called"<<endl; 
        bptr = new int[3]; 
    }
    virtual ~Base( void )
    {
        cout<<"Base class dtor called"<<endl; 
        delete[] bptr; 
        bptr = NULL; 
    }
}; 
class Derived : public Base 
{
    private: 
    int *dptr; 
    public: 
    Derived( )
    {
        cout<<"Derived class ctor called"<<endl; 
        dptr = new int[3]; 
    }
    ~Derived( )
    {
        cout<<"Derived class dtor called"<<endl; 
        delete[] dptr;
        dptr = NULL;   
    }
}; 
int main()
{
    Base *ptrBase = new Derived( ); 
    delete ptrBase; 
    return 0;
}

int main2()
{
    Derived *ptrDerived = new Derived( ); 
    delete ptrDerived; 
    return 0;
}

int main1()
{
    Base *ptrBase = new Base( ); 
    delete ptrBase; 
    return 0;
}
