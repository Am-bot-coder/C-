#include<iostream>
using namespace std;

class Shape{
    protected:
    double area;
    public:
    virtual void acceptRecord(void) = 0;
    virtual void calculateArea(void)=0;
    //this is a pure virtual function;
    //It does not contain body
    //Any class having 1 pure virtual function called as Pure Virtual Function
    void printArea(void){
        cout<<"Area = "<<this->area<<endl;
        }
};

class Rectangle : public Shape{
    private:
    double length;
    double breadth;
    public:
    Rectangle(void): length(0),breadth(0){}
    void acceptRecord(){
        cout<<"Enter the length : ";
        cin>>this->length;
        cout<<"Enter the breadth : ";
        cin>>this->breadth;
    }

    void calculateArea(){
       this->area = this->length * this->breadth;  
    }

};
class Math{
    public:
    static const float PI;
    static float pow(int base,int index){
        float temp = 1.0f;
        for(int i = 0;i<index;i++){
            temp = temp*base;
        }
        return temp;
    }
    

};
const float Math::PI = 3.14f;
class Circle : public Shape{
    private:
    double radius;
    public:
    Circle(void) : radius(0.0){}

    void acceptRecord(void){
        cout<<"Radius : ";
        cin>>radius;
    }

    void calculateArea(void){
        this->area = Math::PI * Math::pow(this->radius,2);
    }
};

class ShapeFactory{
    public:
    static Shape* getInstance(int choice){
        Shape *ptr = NULL;

        switch (choice)
        {
        case 1:
            ptr = new Rectangle;
            break;
        case 2:
            ptr = new Circle;
            break;
        
        }
        return ptr;
    }
};

int menuList(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Rectangle" << endl;
    cout << "2.Circle" << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    return choice;
}




int main()
{   int choice;
    while ((choice = menuList())!=0)
    {
        Shape *ptr = ShapeFactory::getInstance(choice);
        if(ptr != NULL){
            ptr->acceptRecord();
            ptr->calculateArea();
            ptr->printArea();
            delete ptr;
            ptr = NULL;

        }
    }
    return 0;
}
