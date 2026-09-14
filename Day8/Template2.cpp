#include<iostream>
using namespace std;
template<typename X,typename Y>


void print(X a, Y b){
    cout<<"X->"<<a<<endl;
    cout<<"Y->"<<b<<endl;
}

int main()
{
    int a = 10;double d = 20.04824;
    char c = 'A'; bool x = true;
    print(a,d);
    print(c,x);
    print(a,x);
    return 0;
}
