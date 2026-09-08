#include<iostream>
using namespace std;

class Test1{
    public:
    Test1(){
        cout<<"Constructor of Test1 called"<<endl;
    }
    ~Test1(){
        cout<<"Destructor of Test1 called"<<endl;
    }
};

class Test2{
    public:
    Test2(){
        cout<<"Constructor of Test2 called"<<endl;
    }
    ~Test2(){
        cout<<"Destructor of Test2 called"<<endl;
    }
};

void fun1(){
    static Test1 t1;
}
void fun2(){
    Test2 t2;
}

int main()
{   
    fun1();
    fun1();
    fun2();
    fun2();
    
    return 0;
}

