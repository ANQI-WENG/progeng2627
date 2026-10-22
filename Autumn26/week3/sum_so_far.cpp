#include <iostream>

int main(){
    int n;
    int sum = 0;

    std::cout << "Enter a number (0 to stop program): " << std::endl;
    std::cin >> n;

    while(n != 0){
        sum = sum + n;
        std::cout << "Sum so far = " << sum << std::endl;

        std::cout << "Enter a number (0 to stop program): " << std::endl;
        std::cin >> n;
    }
}