#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    if(vin.empty()){
        return -1;
    }

    int min = 0;

    for(int i = 1; i < vin.size(); i++){
        if(vin[i] < vin[min]){
            min = i;
        }
    }

    return min;
}

int main(){
    std::vector<double> v1 = {1, 2, 3};
    std::vector<double> v2 = {5, 6, 7};
    std::vector<double> v3 = {};

    std::cout << (min_vector_element(v1) == 0) << std::endl;
    std::cout << (min_vector_element(v2) == 0) << std::endl;
    std::cout << (min_vector_element(v3) == -1) << std::endl;
    
}