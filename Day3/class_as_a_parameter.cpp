#include<iostream>
using namespace std;

class Test{
private:
int a;
int b;
public:
void setvalues(void){
    cout<<"Enter the values for a and b"<<endl;
    cin>>a>>b;
}
void print(void){
    cout<<"value of a is ->"<<this->a<<endl;
    cout<<"value of b is ->"<<this->b<<endl;
}
//return type is object therefor the datatype is Test for function
Test sum(Test obj){ //pass the test object as parameter
    Test temp;
    temp.a = this->a + obj.a;
    temp.b = this->b + obj.b;
    return temp;
}
};


int main(){
    Test t1;
    t1.setvalues();
    t1.print();

    Test t2;
    t2.setvalues();
    t2.print();

    Test t3;
    t3 = t1.sum(t2);
    t3.print();

    return 0;
}
