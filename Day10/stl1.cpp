#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> A1;
    //Sizeof vector
    cout<<"Size of vector = "<<A1.size()<<endl;
    cout<<sizeof(A1)<<endl;

    A1.push_back(10);
    A1.push_back(20);
    A1.push_back(30);

    

    cout<<"Size of vector = "<<A1.size()<<endl;
    cout<<sizeof(A1)<<endl;
    cout<<"----------------------------->"<<endl;
    //printing the vector in 2 manner:

    for(int index=0;index<A1.size();index++){
        cout<<A1[index]<<endl;
    }
    cout<<"--------------------------->"<<endl;
    vector<int> :: iterator itr = A1.begin();
    while(itr!=A1.end()){
        cout<<*itr<<endl;
        itr++;
    }




    return 0;
}


