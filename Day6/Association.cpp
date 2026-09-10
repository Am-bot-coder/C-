#include<iostream>
using namespace std;
class Timepass{
    int t;
    public:
    Timepass(){
        cout<<"Timepass Constructor called"<<endl;
    }
    ~Timepass(){
        cout<<"Timepass Destructor called"<<endl;
    }
};
//Class Date created and used in other objects
class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date():day(0),month(0),year(0){
        cout<<"Date 1 Constructor Called"<<endl;
    }
    Date(int day,int month,int year){
        this->day=day;
        this->month=month;
        this->year=year;
        cout<<"Date 2 Constructor Called"<<endl;
    }
    ~Date(){
        cout<<"Date Destructor Called"<<endl;
    }
    void acceptDate(){
        cout<<"Enter Day -->";
        cin>>this->day;
        cout<<endl;
        cout<<"Enter Month -->";
        cin>>this->month;
        cout<<endl;
        cout<<"Enter Year -->";
        cin>>this->year;
        cout<<endl;
    }

    void printDate(){
        cout<<this->day<<"/"<<this->month<<'/'<<this->year<<endl;
    }
};

class Aid{
    private:
    int number;
    Date date;
    Timepass t;
    public:
    Aid():number(0){
        cout<<"Aid 1 constructor called"<<endl;
        }
    Aid(int number,int day,int month,int year):number(number),date(day,month,year){
        cout<<"Aid 2 constructor called"<<endl;        
    }
    ~Aid(){
        cout<<"Aid Destructor Called"<<endl;
    }

    void acceptAid(){
        cout<<"Enter your AID Number-->";
        cin>>this->number;
        date.acceptDate();
    }

    void printAid(){
        cout<<"Number :"<<this->number<<endl;
        date.printDate();
        

    }

};

int main()
{
    // Date d1(10,9,2026);
    // Date d2;
    // d1.printDate();
    // cout<<"-------------------------------"<<endl;
    // d2.printDate();
    // d2.acceptDate();
    // d2.printDate();


    
    

    cout<<"-----------------------------"<<endl;
    Aid A2;
    A2.acceptAid();
    A2.printAid();





    return 0;
}
