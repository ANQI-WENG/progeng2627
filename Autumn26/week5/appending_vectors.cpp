#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for(int i = 0; i < vin1.size(); i++){
        vout.push_back(vin1[i]);
    }
    for(int j = 0; j < vin2.size(); j++){
        vout.push_back(vin2[j]);
    }
}

int main(){
    std::vector<int> vin1 = {1, 2, 3, 4};
    std::vector<int> vin2 = {5, 6, 7, 8};
    std::vector<int> vout = {};

    append_vectors(vin1, vin2, vout);
    for(int i = 0; i < vout.size(); i++){
        std::cout << vout[i] << " ";
    }
}