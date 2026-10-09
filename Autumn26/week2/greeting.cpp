#include <iostream>
#include <string>
// header for text variables

int main(){
    std::string user_name;
    // user_name is the name of the variable that's being declared
    // std::string is the type of variable that can contain text

    std::string user_surname;

    std::cout << "what is your first name?" << std::endl;

    std::cin >> user_name;
    // console input reads information from the keyboard
    // information is stored in the variable user_name

    std::cout << "what is your surname?" << std::endl;

    std::cin >> user_surname;

    std::cout << "hello, " << user_name << " " << user_surname << std::endl;
    // prints hello, then content of variable user_name, prints newline
}