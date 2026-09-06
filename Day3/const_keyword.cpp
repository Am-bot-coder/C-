#include<iostream>
using namespace std;

class Test{
    private:
    //for declare the const variable there are 2 methods.
    const int num; 
    const int num2 = 30; //directly 
    mutable int a;
     
    public:
    Test(void):num(0)//We can declare const by here
    {
        /*
        this->num = 0 //We cant do that
        */
    }
    void print() const{ //declare a const function
    //but inside that  we cant change the any variable
    //just use for print 
    //not for changing the variables.

    //if you still need to change the variable in constant member function
    //you need keyword --> mutable;

    //by declaring mutable keyword  we can edit it in te const function
    }
//Thats it only 2 methods
//we cant directly access constant keyword 
};

//ctor cannot be const 
//we cannot declare global function const , 
//class cannot const 
//local pointer and global pointer can be made const 
//data-member can be const 
//member funtion  can be const 