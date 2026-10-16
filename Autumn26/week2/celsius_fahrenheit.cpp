#include <iostream>
#include <string>

int main(){

    double temp_in, temp_out;
    std::string unit_in, unit_out;

    const double c_to_f = 2.12;

    std::cout << "enter a temperature in C/F" << std::endl;
    std::cin >> temp_in >> unit_in;

    if(unit_in == "C"){
        unit_out = "F";
        temp_out = temp_in * c_to_f;

        std::cout << temp_out << "F" << std::endl;
    }
    else if(unit_in == "F"){
        unit_out = "C";
        temp_out = temp_in / c_to_f;

        std::cout << temp_out << "C" << std::endl;
    }
    else{
        std::cout << "error, unit not recognised" << std::endl;
    }
}