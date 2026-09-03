// Pass By address
#include<stdio.h>
void swap(int *x,int *y);

int main(){
    int a=10,b=20;
    swap(&a,&b);

    printf("\nValues after passing the parameters");
    printf("\na: %d",a);
    printf("\nb: %d",b);
    return 0;
}

void swap(int *x,int *y){
    printf("Before switching the numbers we get ->");
    printf("\nx: %d",*x);
    printf("\t having address->%d",x);
    printf("\ny: %d",*y);
    printf("\t having address->%d",y);
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
    printf("\n After switching the numbers we get ->");
    printf("\nx: %d",*x);
    printf("\t having address->%d",x);
    printf("\ny: %d",*y);
    printf("\t having address->%d",y);
}

/*
Before switching the numbers we get ->
x: 10    having address->6487628
y: 20    having address->6487624
 After switching the numbers we get ->
x: 20    having address->6487628
y: 10    having address->6487624
Values after passing the parameters
a: 20
b: 10
*/