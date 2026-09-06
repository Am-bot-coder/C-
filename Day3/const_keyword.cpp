#include<iostream>
using namespace std;

class Test{
    private:
    //for declare the const variable there are 2 methods.
    const int num; 
    const int num2 = 30; //directly 
     
    public:
    Test(void):num(0)//We can declare const by here
    {
        /*
        this->num = 0 //We cant do that
        */
    }
//Thats it only 2 methods
//we cant directly access constant keyword 
};