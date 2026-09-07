#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    //using malloc
    
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



    //using calloc
    int *ptr = (int*)calloc(3,sizeof(int));
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

//realloc is for reallocating memory
//it two 2 things ->
//either gave next 2 subsequent memory addresses;
//else copy that array value in new array size of after allocation

    return 0;
}

