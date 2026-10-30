#include <iostream>

double mypow(double base, int exp){
    if(exp < 0){
        double result = 1;
        for(int i = 0; i < -exp; i++){
            result = result / base;
        }
    return result; 
    }
    else{
        double result = 1;
        for(int i = 0; i < exp; i++){
            result = result * base;
        }
        return result; 
    }
}

double sum(double x, double n){
    double total = 0;
    for(int i = 1; i <= n; i++){
        total += mypow(x, i);
    }
    return total;
}

int main(){
    double x, n;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << "sum of powers = " << sum(x,n) << std::endl;
}