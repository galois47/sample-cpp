#include <iostream>
#include <cstdio>

int main(){
    int a = 0;
    int b = a++;
    int c = ++a;

    printf("a: %i \n", a);
    printf("b: %i \n", b);
    printf("c: %i \n", c);
};
