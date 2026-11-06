#include <iostream>
#include <string>

void myswap(std::string& a, std::string& b){

    std::string tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(){
    std::string a, b;
    std::cout << "Text 1: " << std::endl;
    std::cin >> a;
    std::cout << "Text 2: " << std::endl;
    std::cin >> b;

    myswap(a, b);

    std::cout << "After swapping, " << std::endl;
    std::cout << "Text 1: " << a << std::endl;
    std::cout << "Text 2: " << b << std::endl;
}