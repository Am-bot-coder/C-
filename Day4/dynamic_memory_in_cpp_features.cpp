#include<iostream>
using namespace std;


int main()
{
    int *p1 = new int;
    cout<<"value ->"<<*p1<<" Garbage"<<endl;
    delete p1;
    p1 = NULL;

    int *p2 = new int();
    //set default value  = 0;
    cout<<"value ->"<<*p2<<endl;
    delete p2;
    p2 = NULL;


    int *p3 = new int(10);
    //by default it contain 10;
    cout<<*p3<<endl;
    delete p3;
    p3 = NULL;

    return 0;
}
