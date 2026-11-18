#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    // infile is not a special name; just the name of the object that represents the text file

    infile.open("input.txt");
    // associate object "infile" to the text file "input.txt"

    if(infile.is_open()){
        // if the operation was successful, we can read file contents

        int tmp;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile >> tmp;
        std::cout << tmp << std::endl;

        infile.close();
    }

    else{
        std::cout << "Error opening file" << std::endl;
    }
}