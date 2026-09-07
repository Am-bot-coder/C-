#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 400;
    free(ptr);//Memory leakage stop
    ptr = NULL;//stop dangling pointer

    return 0;
}