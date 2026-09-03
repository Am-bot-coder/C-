# include<stdio.h>

struct Employee
{
  char name[20];
  int age;
  double salary;
};
void printRecord(struct Employee *ptr);
void acceptRecord(Employee *ptr);

int main(void){
    struct Employee p1;
    acceptRecord(&p1);
    printRecord(&p1);
    return 0;
}

void acceptRecord( struct Employee *ptr){
    printf("Enter the name\n");
    scanf("%s",ptr->name);
    printf("Enter the Age\n");
    scanf("%d",&ptr->age);
    printf("Enter the Salary\n");
    scanf("%lf",&ptr->salary);
}

void printRecord(struct Employee *ptr )
{
    printf("name of the employee is ->%s \n",ptr->name);
    printf("age of the employee is ->%d \n",ptr->age);
    printf("salary of the employee is ->%lf \n",ptr->salary);
}


/*
Enter the name
Ayush
Enter the Age
22
Enter the Salary
5000
name of the employee is ->Ayush 
age of the employee is ->22 
salary of the employee is ->5000.000000 
*/