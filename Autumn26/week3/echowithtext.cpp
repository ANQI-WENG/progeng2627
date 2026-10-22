#include <iostream>
#include <string>

int main(){
    std::string echo;

    std::cin >> echo;

    while((echo != "STOP")&&(echo != "stop")&&(echo != "Stop")){
        std::cout << echo << std::endl;
        std::cin >> echo;
    }
}