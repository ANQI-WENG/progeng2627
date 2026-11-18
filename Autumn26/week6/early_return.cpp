#include <iostream>
#include <fstream>
#include <cstdlib> // for EXIT_FAILURE

int main(){
    std::ifstream infile;
    std::string filename;

    std::cout << "Enter name of input text file: ";
    std::cin >> filename;
    infile.open(filename);

    if(!infile.is_open()){ // if file is not open
        std::cout << "Error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }

    infile.close();
}