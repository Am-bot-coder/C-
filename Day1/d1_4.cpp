#include<stdio.h>
struct Employee{
    char name[20];
    int age;
    double salary;
};

int main(void){
    //we can either declare like
    struct Employee p1;
    //or
    Employee p2;


    printf("Enter the name\n");
    scanf("%s",p1.name);
    
    printf("Enter the Age\n");
    scanf("%d",&p1.age);
    
    printf("Enter the Salary\n");
    scanf("%lf",&p1.salary);

    printf("employee p1 name is -> %s\n",p1.name);
    printf("employee p1 Age is -> %d\n",p1.age);
    printf("employee p1 salary is -> %.2lf\n",p1.salary);

    return 0;
}


/*
Enter the name
Ayush
Enter the Age
22
Enter the Salary
5000
employee p1 name is -> Ayush
employee p1 Age is -> 22
employee p1 salary is -> 5000.00
*/