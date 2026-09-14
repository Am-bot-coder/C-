#include <iostream>
using namespace std;
class Point
{
private:
    int xPos;
    int yPos;

public:
    Point(void) : xPos(0), yPos(0)
    {
    }
    Point(int xPos, int yPos) : xPos(xPos), yPos(yPos) 
    {
    }
    void printRecord(void)
    {
        cout << "xPos : " << xPos << endl;
        cout << "yPos : " << yPos << endl;
    }

    

    Point operator-(Point other){
        Point temp;
        temp.xPos = this->xPos-other.xPos;
        temp.yPos = this->yPos - other.yPos;
        return temp;
    }

    Point operator*(Point other){
        Point temp;
        temp.xPos = this->xPos*other.xPos;
        temp.yPos = this->yPos * other.yPos;
        return temp;
    }
    Point operator/(Point other){
        Point temp;
        if(other.xPos==0 || other.yPos==0){
            cout<<"Divide by zero not possible"<<endl;
            return temp;
        }
        else{
            temp.xPos = this->xPos/other.xPos;
            temp.yPos = this->yPos / other.yPos;
        }
        return temp;
    }

    Point operator+(int value){
        Point temp;
        temp.xPos = this->xPos +value;
        temp.yPos = this->yPos;
        return temp;
    }
    Point operator+=(Point other){
        
        this->xPos = this->xPos+other.xPos;
        this->yPos = this->yPos + other.yPos;
        return *this;
    }
    bool operator==(Point other){
        return this->xPos == other.xPos && this->yPos==other.yPos;       
    }

    Point operator++(){
        Point temp;
        temp.xPos = ++this->xPos;
        temp.yPos = ++this->yPos;
        return temp;
    }

    Point operator++(int value){
        Point temp;
        temp.xPos = this->xPos++;
        temp.yPos = this->yPos++;
        return temp;
    }
    friend Point operator+(Point his,Point other);

};


Point operator+(Point his,Point other){
        Point temp;
        temp.xPos = his.xPos+other.xPos;
        temp.yPos = his.yPos + other.yPos;
        return temp;
    }

int main()
{
    Point pt1(10,20);
    Point pt2(10,20);
    Point pt3 = pt1 + pt2;
    Point pt4 = pt1 - pt2;  
    Point pt5 = pt1 * pt2;
    Point pt6 = pt1/pt2;

    Point pt7 = pt1 + 10;
    

   bool a = pt1==pt2;
   cout<<a<<endl<<endl;

   Point pt8 = pt1+=pt2;

    pt3.printRecord();
    cout<<"------------------------------------"<<endl;
    pt4.printRecord();
    cout<<"------------------------------------"<<endl;
    pt5.printRecord();
    cout<<"------------------------------------"<<endl;
    pt6.printRecord();
    cout<<"------------------------------------"<<endl;
    pt7.printRecord();
    return 0;
}
