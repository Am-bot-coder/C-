#include<iostream>
using namespace std;
//upcasting_downcasting.cpp

class Base{
    private:
    int num1;
    int num2;
    public:
    Base():num1(0),num2(0){}
    Base(int num1,int num2):num1(num1),num2(num2){}
    void showRecord(){
        cout<<"num1 : "<<num1<<endl;
        cout<<"num2 : "<<num2<<endl;
    }
};

class Derived : public Base{
    private:
    int num3;
    public:
    Derived():num3(0){}
    Derived(int num3):num3(num3){}
    Derived(int num1,int num2,int num3):Base(num1,num2),num3(num3){}

    void displayRecord(){
        Base::showRecord();
        cout<<"num3 : "<<num3<<endl;
    }

};
class Derived2 : public Derived{
    private:
    int num4;
    public:
    Derived2():num4(0){}
    Derived2(int num4):num4(num4){}
    Derived2(int num1,int num2,int num3,int num4):Derived(num1,num2,num3),num4(num4){}

    void printRecord(){
        Derived::displayRecord();
        cout<<"num4 : "<<num4<<endl;
    }

};

int main()
{
    Base *ptrBase = new Base(10,20); // NOT OK 
    Derived *ptrDerived = (Derived*)ptrBase; //downcasting  but since the 3rd variable not initialize
    ptrDerived->displayRecord( ); 
    return 0;
}

int main3()
{   
    //Upcasting and downcasting can done in multi level hierarchy
    Base *ptr = new Derived(100,200,300);
    Derived2 *pptr =(Derived2*)ptr;
    pptr->printRecord();

    return 0;
}

int main2()
{   
    //Upcasting and downcasting can done in multi level hierarchy
    Base *ptr = new Derived2(100,200,300,400);
    Derived2 *pptr =(Derived2*)ptr;
    pptr->printRecord();

    return 0;
}


int main1()
{
    //All are the example of downcasting
    Base *ptr1 = new Derived(10,20,30);
    ptr1->showRecord();

    Derived *ptr2 = new Derived(40,50,60);
    ptr2->displayRecord();
    Base *ptr3 = ptr2;
    ptr3->showRecord();

    Derived d2(70,80,90);
    Base *ptr4 = &d2;
    ptr4->showRecord();



    cout<<"Downcasting------------------------------------------>"<<endl;
    Derived *pptr = (Derived*)ptr4;
    pptr->displayRecord();

    return 0;
}


//in Upcasting we assing a Derived class pointer to the Base class pointer 
/*

Always remeber for downcasting 
upcasting is mandatory

At the time of downcasting the type cast is important
match the derived from base

because one base class has multiple derived class;

*/