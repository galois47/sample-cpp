#include <iostream>
#include <bitset>

int main() { 
    unsigned int a = 1;
    std::bitset<8> x(a);
    std::cout << x << '\n';

    double b = 1.0;
    std::bitset<16> y(b);
    std::cout << y << '\n';

    return 0;
}