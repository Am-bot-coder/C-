#include<stdio.h>
#include<iostream>
using namespace std; 

//namespace is juct collection of similar objects
//basicallu using for(Grouping)

namespace na{
int num1 = 10;
}

int main(){
    int num1 = 20;
    cout<<num1<<endl;
    cout<<na::num1; //from namespace we use num1

    //we can use using keyword as we do it  for std;
    //else we need to write always std::cout<<........

    //just remember try to ignore make an ambiguty due to name clash
    //2 or more name contender for one place

    // there can be multiple namespaces possible;
    //same name under different namespaces also possible




    

    return 0;
}
//same name for namespaces are allowed
//but the variables or members must be different 
/*
namespace na
{
    int num1 = 10; 
    int num2 = 20; 
}
namespace na 
{
    int num3 = 30; 
    int num4 = 40; 
}
*/


//nesting of namespace is also allowed;
//we can create different structures, variables ,functions, namespaces in the namespaces
