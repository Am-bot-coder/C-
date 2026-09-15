#include<iostream> 
#include<set> 
using namespace std; 
int main()
{
    set<int> s1; // allows only unique elements , Automatically sorted.
    s1.insert(10);
    s1.insert(20); 
    s1.insert(30);
    s1.insert(40);
    s1.insert(10);

    s1.erase(20); //remove 20 from set

    // s1.clear() //remove everything

    //s1.count(20) // find the element exist 0r not
    //return 1 if exist else 0



    set<int> :: iterator itr = s1.begin( ); 
    while(itr!=s1.end( ))
    {
        cout<<*itr <<endl; 
        itr++; 
    }
    return 0;
}
