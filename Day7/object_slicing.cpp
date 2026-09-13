#include<iostream>
using namespace std;
//object_slicing.cpp
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

int main7()
{   //This not works
    Derived d1(10,20,30);
    Base b1(40,50);
    //d1 = b1;
    d1.displayRecord();
    return 0;

    //this cant be possible because it There is " IS - A " relationship between 
    //parent and child
    //It gave error- compiler error;

}

int main6()
{   
    //Object slicing
    /*
    When you assign a dervied class object to a base class object then it is called
    object slicing
    In the object slicing the extra part of the derived class is removed and assign value to 
    base class;
    */
    Derived d1(10,20,30);
    Base b1(40,50);
    b1.showRecord();
    cout<<"--------------------->"<<endl;
    b1 = d1;
    b1.showRecord();    
    return 0;
}


int main5()
{
    Derived d1(10,20,30); 
    Derived d2; 
    d2 = d1; 
    d2.displayRecord( ); 
    return 0;

    //same for base
    Base b1(10,20); 
    Base b2; 
    b2 = b1; 
    b2.showRecord( ); 
    return 0;
}


int main4()
{
    Derived *ptr = new Derived(10,20,30);
    ptr->displayRecord();
    cout<<"---------------------"<<endl;
    ptr->showRecord();
    delete ptr;
    ptr = NULL;
   return 0;
}

int main3()
{
    /*
    Creating a base Class Pointer and assign an base class object to it.
    */
   Base *ptr = new Base(10,20);
   delete ptr;
   ptr = NULL;
   ptr->showRecord();
   return 0;
}
int main2()
{
    Derived d(10,20,30);
    d.displayRecord();
    cout<<"---------------------"<<endl;
    d.showRecord();
    //we can call the parent class method from child class directly
    return 0;
}

int main1()
{
    Base b(10,20);
    b.showRecord();
    // Gave an Error --> b.displayRecord() 
    //you cant call the child class methdod through parent class directly
    return 0;
}
