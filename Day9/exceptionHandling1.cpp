#include<iostream>
using namespace std;

class cantDivideByZero{
    private:
    string message;
    public:
    cantDivideByZero(){
        this->message = "Message Not initiate";
    }
    cantDivideByZero(string msg){
        this->message = msg;
    }
    void getError(){
        cout<<this->message<<endl;
    }
};

void acceptRecord(string msg,int &num){
    cout<<msg;
    cin>>num;
}

int main(){
    cout<<"open the connection : "<<endl;
    int num1;
    ::acceptRecord("num1 : ",num1);
    int num2;
    ::acceptRecord("num2 : ",num2);
    try
    {
        if(num2==0){
        throw cantDivideByZero("Cant divide any number by zero");
    }

        int res = num1/num2;
        cout<<"res : "<<res<<endl;
    }
    catch(cantDivideByZero er)
    {
        er.getError();
    }

    cout<<"close the connection :"<<endl;
    return 0;
}