#include <iostream>

int main(){
    double weight, height, bmi;

    std::cout << "BMI Calculator" << std::endl;

    std::cout << "What is your weight (kg)?" << std::endl;
    std::cin >> weight;

    std::cout << "What is your height (m)?" << std::endl;
    std::cin >> height;

    bmi = weight / (height * height);

    std::cout << "Your BMI is " << bmi << std::endl;
}