#include <iostream>
int main(){
    int n;
    int factorial = 1;
    
    std::cout << "Enter n: ";
    std::cin >> n;

    for(int i = n; i > 0; i = i-1){
        factorial = factorial * i;
    }
    std::cout << n << "! = " << factorial;
}