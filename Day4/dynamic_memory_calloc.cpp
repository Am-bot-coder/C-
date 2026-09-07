//calloc takes 2 parameter
//unlike malloc it required 1.number of blocks, 2.size;

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int *ptr = (int*)calloc(4,sizeof(int));
    if(ptr!=NULL){
        ptr[0]=100;
        ptr[1]=200;

    }
    for(int i=0;i<4;i++){
        cout<<"Values-->"<<ptr[i]<<endl;
        }
    free(ptr);
    ptr=NULL;
    return 0;
}
//calloc by default set velue = 0;
//malloc gets garbage value