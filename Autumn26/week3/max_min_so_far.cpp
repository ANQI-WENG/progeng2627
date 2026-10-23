#include <iostream>

int main(){
    int n;
    std::cout << "Enter a number (0 to stop program): " << std::endl;
    std::cin >> n;
    int current_max = n;
    int current_min = n;

    std::cout << "Highest value so far = " << current_max << std::endl;
    std::cout << "Lowest value so far = " << current_min << std::endl;

    while(n != 0){

        std::cout << "Enter a number (0 to stop program): " << std::endl;
        std::cin >> n;

        if(n > current_max){
            current_max = n;
        }
        if(n < current_min){
            current_min = n;
        }

        std::cout << "Highest value so far = " << current_max << std::endl;
        std::cout << "Lowest value so far = " << current_min << std::endl;
    }
}