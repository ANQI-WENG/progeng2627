#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;
    int n;
    std::cout << "Enter n (number of values in vector): ";
    std::cin >> n;

    int x;

    for(int i = 0; i < n; i++){
        std::cout << "Enter a value: " << std::endl;
        std::cin >> x;
        v.push_back(x);
    }

    int t;
    std::cout << "Enter t (to print all values in the vector less than t): ";
    std::cin >> t;

    std::cout << "Values less than t: " << std::endl;

    for(int j = 0; j < n; j++){
        if(v[j] < t){
            std::cout << v[j] << std::endl;
        }
    }
}