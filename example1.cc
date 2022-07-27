#include <stdio.h>
#include <iostream>
using namespace std;
struct rectangle
{

    int l;
    int b;
};
int main(){
    struct rectangle r1={10,5};
    printf("%lu", sizeof(r1));
    return 0;

}