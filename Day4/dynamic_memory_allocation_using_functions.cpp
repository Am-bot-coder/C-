#include<iostream>
#include<cstdlib>
using namespace std;



int* allocate_memory(int size){
    int* p = (int*)calloc(size,sizeof(int));
    return p;
}

void free_memory(int *&p){
    free(p);
    p=NULL;
}

int main(){
    int *ptr;
    ptr = allocate_memory(5);
    ptr[0]=20;
    ptr[1]=10;
    ptr[2]=60;
    ptr[3]=40;
    ptr[4]=100;

    for(int index=0;index<5;index++){
        cout<<ptr[index]<<endl;
    }
    free_memory(ptr);
    
}
