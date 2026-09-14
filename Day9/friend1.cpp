#include<iostream>
using namespace std;

class ABC{
    private:
    int sec_number;
    protected:
    int digilock;
    public:
    ABC():sec_number(10),digilock(20){}
    friend int main();

};


int main()
{
    ABC x;
    cout<<x.sec_number<<endl;
    cout<<x.digilock<<endl;

    return 0;
}
