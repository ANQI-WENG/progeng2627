#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int i = 0;

    while(i < n){

        int k = 0;

        while(k < n){
            std::cout << "* ";
            k = k + 1;
        }   
        std::cout << std::endl;
        i = i + 1;
    }

    return 0;
}