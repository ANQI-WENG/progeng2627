#include <iostream>

int main(){
    int n1, n2;

    std::cout << "Enter two values: " << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "You entered: " << "n1 = " << n1 << ", n2 = " << n2 << std::endl;

    int tmp;

    tmp = n1;
    n1 = n2;
    n2 = tmp;

    std::cout << "After swapping the values: " << "n1 = " << n1 << ", n2 = " << n2 << std::endl;
}