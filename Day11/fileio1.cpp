#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;
    file.open("sample.text");
    if(file.is_open()){
        cout<<"file is open"<<endl;
    }
    else{
        cout<<"file is closed"<<endl;
    }
    file.close();
    cout<<"---------------------->"<<endl;
    if(file.is_open()){
        cout<<"file is open"<<endl;
    }
    else{
        cout<<"file is closed"<<endl;
    }
    
    return 0;
}
