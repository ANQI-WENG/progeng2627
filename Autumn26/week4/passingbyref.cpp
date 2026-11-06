#include <iostream>

void myswap(int& n1, int& n2){
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main(){
    int n1, n2;

    std::cout << "Enter two values: " << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "You entered: n1 = " << n1 << ", n2 = " << n2 << std::endl;

    myswap(n1, n2);

    std::cout << "After swapping: n1 = " << n1 << ", n2 = " << n2 << std::endl;
}