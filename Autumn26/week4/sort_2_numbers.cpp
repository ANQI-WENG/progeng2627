#include <iostream>

void myswap(double& n1, double& n2){
    int tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort_2_numbers(double& s1, double& s2){
    if(s1 > s2){
        myswap(s1, s2);
    }
}

int main(){
    double i, j;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> i >> j;
    sort_2_numbers(i, j);
    std::cout << i << " " << j << std::endl;
}