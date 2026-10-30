#include <iostream>
#include <cmath>

double sum(double x, double n){
    double total = 0;
    for(int i = 1; i <= n; i++){
        total += pow(x, i);
    }
    return total;
}

int main(){
    double x;
    double n;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "n: ";
    std::cin >> n;

    std::cout << "sum of powers = " << sum(x,n) << std::endl;
}