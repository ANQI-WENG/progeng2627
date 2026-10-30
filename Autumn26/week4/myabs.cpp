#include <iostream>

double myabs(double i){

    double abs;

    if(i < 0){
        abs = -i;
    }
    else{
        abs = i;
    }
    return abs;
}

int main(){
    double n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "|" << n << "| = " << myabs(n) << std::endl;
}