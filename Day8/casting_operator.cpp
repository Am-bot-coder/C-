#include<iostream>
using namespace std;

class A{
    private:
    int num1;
    public:
    A(void){
        cout<<"Constructor called A"<<endl;
    }
    
    virtual void method1(){
        cout<<"Hello A"<<endl;
    }
    void method2(){
        cout<<"Hello AAA"<<endl;
    }
    virtual ~A(){
        cout<<"Destructor called A"<<endl;
    }
};
class B:public A{
    private:
    int num2;
    public:
    B(void){
        cout<<"Constructor called B"<<endl;
    }
    
    void method1(){
        cout<<"Hello B"<<endl;
    }
    void method2(){
        cout<<"Hello BBB"<<endl;
    }
    ~B(void){
        cout<<"Destructor called B"<<endl;
    }
};

class C:public A{
    private:
    int num3;
    public:
    C(void){
        cout<<"Constructor called C"<<endl;
    }
    
    void method1(){
        cout<<"Hello C"<<endl;
    }
    void method2(){
        cout<<"Hello CCC"<<endl;
    }
    ~C(void){
        cout<<"Destructor called C"<<endl;
    }
};

int main()
{
    A *ptr1 = new B;
    ptr1->method1();
    ptr1->method2();

    //Static Casting
    B *ptr2 = static_cast<B*>(ptr1); //we do not check wheather the typecasting is valid or not;
    //only check is the base class inherit the property or not
    ptr2->method2();

    //Dynamic Casting
    C *ptr3 = dynamic_cast<C*>(ptr1); //we check wheather casting is valid or not
    // also check base class inherit parent or not
    if (ptr3 != NULL)
        ptr3->method2();
    else
        cout << "Casting to C failed" << endl;


    delete ptr1;
    ptr1 = NULL;
    
    return 0;
}


int main1()
{
    A *ptr1 = new B;
    ptr1->method1();
    ptr1->method2();

    // to use non overidable function of ferived class need downcasting
    //these are traditional method to do it downcasting
    B *ptr2 = (B*)ptr1;
    ptr2->method2();
    C *ptr3 = (C*)ptr1;
    ptr3->method2();


    delete ptr1;
    ptr1 = NULL;
    
    return 0;
}
