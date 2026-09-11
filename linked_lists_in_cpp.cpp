#include<iostream>
using namespace std;

class A{
    private:
    int roll_number;
    double marks;
    public:
    A(void):roll_number(0),marks(0.0){}
    A(int roll_number,double marks):roll_number(roll_number),marks(marks){}

    void acceptValue(){
        cout<<"Enter the Number-->";
        cin>>this->roll_number;
        cout<<"Enter the marks-->";
        cin>>marks;
    }
    void printValue(){
        cout<<"Roll_number : "<<this->roll_number<<endl;
        cout<<"Marks : "<<this->marks<<endl;
    }
};

class Node{
    public:
    A obj;
    Node *next;
    Node(void){
        this->obj.acceptValue();
        this->next = NULL;

    }
    
};

void printLinkedList(Node* n){
    while (n!=NULL)
    {   
        n->obj.printValue();
        n = n->next;       
    }
    
}

void addElement(Node *&n){
    
    if(n == NULL){
        n = new Node;
    }
    else{
        Node *temp = n;
        while(temp->next!=NULL){
        temp = temp->next;
    }
        temp->next = new Node;
    }
}

void deleteElement(Node *&n){
    while(n!=NULL){
        Node * temp = n;
        n = n->next;
        delete temp;

    }
}

int menuDriven(){
    int ch;
    cout<<"0 for Exit"<<endl;
    cout<<"1 for Add element"<<endl;
    cout<<"2 print element"<<endl;
    cin>>ch;
    return ch;

}



int main()
{
    Node *head = NULL;
    int ch;
    while ((ch = menuDriven())!=0)
    {
        switch (ch)
        {
        case 1:
            addElement(head);
            break;
        case 2:
            printLinkedList(head);
            break;
        default:
        cout<<"Enter Correct Choice"<<endl;
            break;
        }
    }
    


    deleteElement(head);
    return 0;
}
