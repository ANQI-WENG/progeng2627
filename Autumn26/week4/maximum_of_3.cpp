#include <iostream>

double largest(double i, double j, double k){
    double max = 0;
    if((i >= j)&&(i >= k)){
        max = i;
    }
    if((j >= i)&&(j >= k)){
        max = j;
    }
    if((k >= i)&&(k >= j)){
        max = k;
    }
    return max;
}

int main(){
    std::cout << (largest(4, 5, 6) == 6) << std::endl;
    std::cout << (largest(-10, 10, 20) == 20) << std::endl;
    std::cout << (largest(-5, -12, -15) == -5) << std::endl;
    std::cout << (largest(0.1, 0.95, -1.2) == 0.95) << std::endl;
}