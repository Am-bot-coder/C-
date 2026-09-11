#include<iostream>
using namespace std;

class A{
    private:
    int num1;
    public:
    A(){
        cout<<"Constructor of A called"<<endl;
    }
    A(int num1){
        
        this->num1 = num1;
    }
    void printRecord(){
        cout<<"Num1 : "<<num1<<endl;
    }
};
class B: virtual public A{
    private:
    int num2;
    public:
    B(){
        cout<<"Constructor of B called"<<endl;
    }
    B(int num2){
        this->num2 = num2;
    }
    B(int num1,int num2):A(num1){
        cout<<"Constructor of B called"<<endl;
        this->num2 = num2;
    }
    void printRecord(){
        A::printRecord( ); 
        cout<<"Num2 : "<<num2<<endl;
    }
};
class C: virtual public A{
    private:
    int num3;
    public:
    C(){
        cout<<"Constructor of C called"<<endl;
    }
    C(int num3){
        this->num3 = num3;
    }
    C(int num1,int num3):A(num1){
        cout<<"Constructor of C called"<<endl;
        this->num3 = num3;
    }
    void printRecord(){
        A::printRecord( ); 
        cout<<"Num3 : "<<num3<<endl;
    }
};

class D : public B,  public C{
    private:
    int num4;
    public:
    D(){
        cout<<"Constructor of D called"<<endl;
    }
    D(int num4){
        this->num4 = num4;
    }
    D(int num1, int num2, int num3, int num4): A(num1),B(num2), C(num3){
        
        this->num4 = num4;
    }
    void printRecord(){
        B::printRecord( ); 
        C::printRecord( );
        cout<<"Num4 : "<<num4<<endl;
    }
};


int main(
    
)
{   //-----------------------------------------
    //A a; 
    //Constructor of A called
    //-----------------------------------------

    //-----------------------------------------
    // A a(10);
    // a.printRecord();
    // Constructor of A called
    // Num1 : 10
    //------------------------------------------


    //-----------------------------------------
    // B b;
    //Constructor of A called
    //Constructor of B called
    //-----------------------------------------

    //-----------------------------------------
    // B b(10,20);
    // b.printRecord();
    // Constructor of A called
    // Constructor of B called
    // Num1 : 10
    // Num2 : 20 
    //-----------------------------------------


    //-----------------------------------------
    // C c;
    // Constructor of A called
    // Constructor of C called
    //-----------------------------------------


    //-----------------------------------------
    // C c(10,30);
    // c.printRecord();
    // Constructor of A called
    // Constructor of C called
    // Num1 : 10
    // Num3 : 30
    //-----------------------------------------


    //-----------------------------------------
    // D d;
    // Constructor of A called
    // Constructor of B called
    // Constructor of A called
    // Constructor of C called
    // Constructor of D called
    //-----------------------------------------


    //-----------------------------------------
    D d(10,20,30,40);
    //d.printRecord;       // Ambiguty error for functiom
    // cout<<sizeof(d);    // 20 but have 16
    //d.B::printRecord();  // OK prints B used
    //d.C::printRecord();  // OK prints C used
    d.A::printRecord();  // Not Ok

    //-----------------------------------------
    //-----------------------------------------

    return 0;
}
