#include<iostream>
using namespace std;

class A{
    public:
    void add();
};
class B{
    private:
    int i1;
    int i2;
    public:
    B():i1(10),i2(20){};
    friend class A;
};


void A::add(){
    B b;
    cout<<b.i1<<"  "<<b.i2<<endl;
}

int main()
{
    A a;
    a.add();
    return 0;
}
