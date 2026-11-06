#include <iostream>
#include <cmath>

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

double sumofpowers(double x, int n){
    double sum;
    for(int i = 1; i < n + 1; i++){
        sum = sum + exp(x, i);
    }
}