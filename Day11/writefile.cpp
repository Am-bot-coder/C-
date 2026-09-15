#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file;

    file.open(("sample.text"));
    if(file.is_open()){
        file<<"Hello Everybody"<<endl;
        file<<"My name is Ayush"<<endl;
    }
    else{
        cout<<"Error Occured"<<endl;
    }

    file<<"Hello buddy";
    file.close();



    

    
    return 0;
}
