#include <iostream>

double largest(double i, double j){
    double max = 0;
    if(i >= j){
        max = i;
    }
    else{
        max = j;
    }
    return max;
}

int main(){
    std::cout << (largest(4, 5) == 5) << std::endl;
    std::cout << (largest(-10, 10) == 10) << std::endl;
}