#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main()
{
    fstream file;
    file.open("sample.text",ios::in | ios::out | ios::trunc);

    if(file.is_open()){
        file<<"Hello Everybody"<<endl;
        file<<"nice to meet you"<<endl;
        file<<" my name is Ayush"<<endl;


        char ch;
        file.seekg(0);// start file from begining
        while(file.get(ch)){
            cout<<ch;
                            }
    
    }
    file.close();

    


    return 0;
}
