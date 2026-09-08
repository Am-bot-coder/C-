#include<iostream>
using namespace std;

class Fact{
    public:
    static int factorial(int n){
        int temp = 1;
        for(int i=n;i>1;i--){
            temp = temp * i;
        }
    }
};

int main()
{
    int a;
    a = Fact::factorial(5);
    cout<<a<<endl;
    return 0;
}


//we can access static member function inside main if they are public
