#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ifstream fin;
    fin.open("sample.text");
    if(fin.is_open()){
        char ch;
        while(fin.get(ch)){
            cout<<ch;
        }
    }
    else{
        cout<<"file not found";
    }
    fin.close();
    return 0;
}
