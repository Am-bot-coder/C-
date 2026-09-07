#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int *ptr = (int*)malloc(4*sizeof(int));
    if(ptr!=NULL){
        ptr[0]=100;
        ptr[1]=200;
        // ptr[2]=300;
        }
    for(int i = 0;i<4;i++){
        cout<<ptr[i]<<endl;
    }
    free(ptr);
    ptr = NULL;

    
    return 0;
}
/*
Output
100
200
13500752
0
*/

//creating array of the integer by using the malloc
//just remember that we need to free pointer for stop data leakage
//make pointer point toward null to stop dangling pointer 