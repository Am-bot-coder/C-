#include<stdio.h>
int num1 = 10; //program variable --> can be used by multiple linked cpp files
static int num2 = 20; //file scope --> used only in current cpp file

class Sample{
    int num3 = 30; //class scope
};

namespace na{
int num4 = 40;//namespace scope 
};
