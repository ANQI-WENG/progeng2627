#include <iostream> 

bool leap_year(int year){
    bool ly;

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return true;
            }
            else{
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
    return ly;
}

int main(){

    int input_year;

    std::cout << (leap_year(1600) == 1) << std::endl;
    std::cout << (leap_year(1700) == 0) << std::endl;

    std::cout << (leap_year(2100) == 0) << std::endl;
    std::cout << (leap_year(2200) == 0) << std::endl;
    std::cout << (leap_year(2300) == 0) << std::endl;
    std::cout << (leap_year(2400) == 1) << std::endl;
    std::cout << (leap_year(2500) == 0) << std::endl;
    std::cout << (leap_year(2600) == 0) << std::endl;
    std::cout << (leap_year(2700) == 0) << std::endl;
    std::cout << (leap_year(2800) == 1) << std::endl;
    std::cout << (leap_year(2900) == 0) << std::endl;
    std::cout << (leap_year(3000) == 0) << std::endl;

    std::cout << "Enter a year: ";
    std::cin >> input_year;

    if(leap_year(input_year)){
        std::cout << input_year << " is a leap year" << std::endl;
    }
    else{
        std::cout << input_year << " is not a leap year" << std::endl;
    }
}