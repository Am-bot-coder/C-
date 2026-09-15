#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    cout<<s.empty()<<endl;
    s.push(10);
    s.push(20); //add value
    s.push(30);
    s.pop(); //doesnt return the remove value
    cout<<s.top()<<endl;//return tope element
    cout<<s.size();//show the size of stack
    
    return 0;
}
