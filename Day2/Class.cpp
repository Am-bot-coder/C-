#include<iostream>
using namespace std;

class Employee{
private:
int a=10;
int b=20;
int c=30;

public:
void print(){
    cout<<"The value of a-->"<<this->a<<endl;
};
void show();
void display();
};

void Employee::show(){
    cout<<"The value of b is-->"<<this->b<<endl;
}

void Employee::display(){
    this->show();
}

int main(){
    Employee emp;
    emp.print();
    emp.show();
    emp.display();

}
