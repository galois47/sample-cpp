#include <iostream>

int main(){
    int x = 5;
    int *ptr_x = &x;

    std::cout << "Value of x:                 " << x << "\n";
    std::cout << "Reference to x:             " << &x << "\n";
    std::cout << "Pointer to x:               " << ptr_x << "\n";
    std::cout << "Dereferencing pointer to x: " << *ptr_x << std::endl;
};