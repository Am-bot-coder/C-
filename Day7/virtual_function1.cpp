#include <iostream>
using namespace std;
class Product
{
private:
    string title;
    double price;
/*
In that program  accept record is virual
so all accept record are become virtual 
over riding can happen .

Object class accept record used;



but in print record no virual keyword is used
so cant use that.


*/
public:
    Product(void) : title(""), price(0.0)
    {
    }
    virtual void acceptRecord(void)
    {
        cout << "Title : ";
        cin >> title;
        cout << "Price : ";
        cin >> price;
    }
    void printRecord(void)
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
    }
};
class Book : public Product
{
private:
    int pageCount;

public:
    Book(void) : pageCount(0)
    {
    }
    void acceptRecord(void)
    {
        Product::acceptRecord( ); 
        cout << "PageCount : ";
        cin >> pageCount;
    }
    void printRecord(void)
    {
        Product::printRecord( ); 
        cout << "PageCount : " << pageCount << endl;
    }
};
class Tape : public Product
{
private:
    int playTime;
public:
    Tape(void) : playTime(0)
    {
    }
    void acceptRecord(void)
    {
        Product::acceptRecord( ); 
        cout << "PlayTime : ";
        cin >> playTime;
    }
    void printRecord(void)
    {
        Product::printRecord( ); 
        cout << "PlayTime : " << playTime << endl;
    }
};

int menuList( void )
{
    int choice; 
    cout<<"0.Exit"<<endl; 
    cout<<"1.Book"<<endl;
    cout<<"2.Tape"<<endl;
    cout<<"Enter the choice : "; 
    cin>>choice; 
    return choice; 
}

int main()
{
    int ch;
    while((ch = menuList())!=0){
        Product *p;
        switch (ch)
        {
        case 1:
            p = new Book;
            p->acceptRecord();//accept record of base class called not the child class
            p->printRecord();//print record of base class called not the child class
            break;
        case 2:
            p = new Tape;
            p->acceptRecord();//accept record of base class called not the child class
            p->printRecord();//print record of base class called not the child class
            break;
        
        default:
            cout<<"Choose Correct Choice"<<endl;
            break;
        }
    }
}
