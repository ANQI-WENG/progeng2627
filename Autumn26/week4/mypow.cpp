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

int main(){

    std::cout << "2^3 = " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2 = " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0 = " << mypow(1, 0) << std::endl;
    std::cout << "9^-1 = " << mypow(9, -1) << std::endl;
}