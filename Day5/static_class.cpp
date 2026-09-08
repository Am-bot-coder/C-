#include<iostream>
using namespace std;

class College_student{
    private:
    
    int roll_no;
    static int fees;

    public:
    College_student(){
        this->roll_no = 0; 
    }
    void get_roll_no(){
        cout<<fees<<endl;
    }
    static void set_fees(int a){
        fees = fees +a;
    }
    static void get_fee(){
        cout<<fees<<endl;
    }
    
};

int College_student :: fees = 24000;

int main()
{
    College_student s1;
    College_student s2;
    s1.get_fee();
    s2.get_fee();
    s2.set_fees(10000);
    s1.get_fee();
    s2.get_fee();
    s1.get_roll_no();


    return 0;
}
// we use static functions to access static variable
// if we dont declare global declaration for static variable in object
//it give linker error
/*
undefined reference to `College_student::fees'
collect2.exe: error: ld returned 1 exit status
PS D:\CDAC\C++\My CPP classwork\Day5> 
*/

//but we can access the static variable in normal function
//but not recommended

//but we cant use the non static member inside the static function
