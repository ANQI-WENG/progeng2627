#include <iostream>

int main(){
    double x;
    int n;
    double output = 1.0;
    
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter n: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        output = output * x;
    }
    std::cout << "x^n = " << output;
}