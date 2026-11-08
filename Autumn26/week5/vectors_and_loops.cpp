#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int tmp = 1;
    // initialised to 1 to enter loop the first time

    std::cout << "Enter a sequence terminated by 0" << std::endl;
    while(tmp != 0){
        std::cin >> tmp;
        sequence.push_back(tmp); // store the number in the vector "sequence"
    }

    std::cout << "You entered the sequence: " << std::endl;
    for(int i = 0; i < sequence.size(); i++){
        std::cout << sequence[i] << std::endl;
    }

    std::cout << "In reverse order: " << std::endl;
    for(int i = sequence.size() - 1; i >= 0; i--){
        std::cout << sequence[i] << std::endl;
    }
}