#include <iostream>

int main(){
    int n, count = 0;
    double avg = 0, sum = 0;

    std::cout << "Enter a number (0 to stop program): " << std::endl;
    std::cin >> n;

    while(n != 0){
        sum = sum + n;
        count = count + 1;
        avg = sum/count;

        std::cout << "Average so far = " << avg << std::endl;
        std::cout << "Enter a number (0 to stop program): " << std::endl;
        std::cin >> n;
    }
}