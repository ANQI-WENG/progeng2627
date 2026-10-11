#include <iostream>

int main(){
    double gbp, eur;

    std::cout << "enter amount in gbp" << std::endl;
    std::cin >> gbp;

    eur = gbp * 1.18;

    std::cout << "amount in eur = " << eur << std::endl;
}