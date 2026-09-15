#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main()
{
    fstream file;
    file.open("sample.text");

    if(file.is_open()){
        file<<"Hello Everybody"<<endl;
        file<<"nice to meet you"<<endl;
        file<<" my name is Ayush"<<endl;
    }

    char ch;
    while(file.get(ch)){
        cout<<ch;
    }
    file.close();


    return 0;
}
