// Pass By Value
#include<stdio.h>

void swap(int x,int y){
    printf("Before switching the numbers we get ->");
    printf("\nx: %d",x);
    printf("\ny: %d",y);
    x = x+y;
    y = x-y;
    x = x-y;
    printf("\n After switching the numbers we get ->");
    printf("\nx: %d",x);
    printf("\ny: %d",y);
}

int main(){
    int a=10,b=20;
    swap(a,b);

    printf("\nValues after passing the parameters");
    printf("\na: %d",a);
    printf("\nb: %d",b);
    return 0;
}

/*
Before switching the numbers we get ->
x: 10
y: 20
 After switching the numbers we get ->
x: 20
y: 10
Values after passing the parameters
a: 10
b: 20
*/