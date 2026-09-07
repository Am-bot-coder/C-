#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int z = 0;
    int **ptr = (int **)malloc(4*sizeof(int*)); //16
    for(int index=0;index<4;index++){
        ptr[index] = (int *)malloc(3*sizeof(int));//
    }
    for(int row=0;row<4;row++){
        for(int column=0;column<3;column++){
            ptr[row][column] = z;
            z++;
        }
    }
    for(int row=0;row<4;row++){
        for(int column=0;column<3;column++){
            cout<<ptr[row][column]<<"   ";
        }
        cout<<endl;

    }

    for(int index=0;index<4;index++){
        free(ptr[index]);
        ptr[index]=NULL;
    }
    
    cout<<"hello";
    
    return 0;
}

// It printed a 4×3 sequence from 0 to 11, 
// but exited with code 1, 
// indicating the program returned a nonzero status 
// or encountered an error after printing.