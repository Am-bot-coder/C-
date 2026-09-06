#include<iostream>
using namespace std;

class A{
    private:
    int a;
    int b;

    public:
    void seta(){
        cout<<"set the value of a-->";
        cin >>a;
        cout<<endl;
    }
    void setb(){
        cout<<"set the value of b-->";
        cin >>b;
        cout<<endl;
    }
    void geta(){
        cout<<"the value of a is ->"<<a<<endl;
    }
    void getb(){
        cout<<"the value of b is ->"<<b<<endl;
    }
};

int main(){
    A a1;
    a1.seta();
    a1.setb();
    a1.geta();
    a1.A::getb();

    return 0;

}