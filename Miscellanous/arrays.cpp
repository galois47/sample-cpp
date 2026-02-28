#include <iostream>
#include <array>
#include <cstdio>

int main(){
    //Declaring array, populating and printing out.
    std::array<int,5> n;

    for (size_t i = 0; i < n.size(); i++){
        n[i] = i + 1;
    };

    for (size_t j = 0; j < n.size(); j++){
        printf("Array Element %lu : %i \n", j, n[j]);
    };
};
