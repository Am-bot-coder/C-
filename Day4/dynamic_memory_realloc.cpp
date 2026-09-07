#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int *ptr = (int*)malloc(3*sizeof(int));
    ptr[0]=100;
    ptr[1]=200;
    ptr[2]=300;


    ptr = (int*)realloc(ptr,2*sizeof(int));
    ptr[3]=400;
    ptr[4]=500;

    for(int index = 0;index<5;index++){
        cout<<ptr[index]<<endl;
    }

    free(ptr);
    ptr = NULL;
    return 0;
}