#include<iostream>
#include<typeinfo> //#include<typeinfo>   --> typeid.name();
using namespace std;

class Base{public:
virtual ~Base(){}};  //for using type id base class must be poly morphic

/*

base class ploymorphic means at least one function should 
be virual

or destructor shold be virtual

else the object created treated as static pointer.

thats the imp key;

*/
class Derived : public Base{};


int main4()
{
    Base *ptr = NULL;
    cout<<"Pointer of Base with NULL(ptr) : "<<typeid(ptr).name()<<endl;
   
    cout<<"Pointer of Base with NULL(*ptr) : "<<typeid(*ptr).name()<<endl;//throw an exception
    //Pointer of Base with NULL(ptr) : P4Base
    //terminate called after throwing an instance of 'std::bad_typeid'
    return 0;
}


int main()
{
    Base *ptr = new Derived; //upcasting
    cout<<"Pointer of Base with Derived Object(ptr) : "<<typeid(ptr).name()<<endl;
    //P4Base
    cout<<"Pointer of Base with Derived Object(*ptr) : "<<typeid(*ptr).name()<<endl;
    //4Base - if not calling virtual destructor
    //7Derived - if called virual destructor
    return 0;

    delete ptr;
    ptr = NULL;
}

int main2()
{
    Base *ptr = new Base;
    cout<<"Pointer of Base with Base Object : "<<typeid(ptr).name()<<endl;
    //P4Base
    cout<<"Pointer of Base with Base Object : "<<typeid(*ptr).name()<<endl;
    //4Base
    
    Derived *der = new Derived;
    cout<<"Pointer of Derived with Derived Object : "<<typeid(der).name()<<endl;
    //P7Derived
    cout<<"Pointer of Derived with Derived Object : "<<typeid(*der).name()<<endl;
    //7Derived
    return 0;

    delete ptr;
    ptr = NULL;
    delete der;
    der = NULL;
}

int main1()
{   
    int a;
    char c;
    double dd;
    float f;
    Base b;
    Derived d;
    cout<<"Int : "<<typeid(a).name()<<endl; //i
    cout<<"Char : "<<typeid(c).name()<<endl; //c
    cout<<"DOuble : "<<typeid(dd).name()<<endl; //d
    cout<<"Float : "<<typeid(f).name()<<endl; //f
    cout<<"Base : "<<typeid(b).name()<<endl; //4Base
    cout<<"Derived : "<<typeid(d).name()<<endl; //7Derived

    return 0;
}
