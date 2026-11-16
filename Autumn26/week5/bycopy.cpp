#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];

    }

    return sum;
}

int main(){
    std::vector<double> v;

    int n;
    std::cout << "Enter n (# of elements to store): " << std::endl;
    std::cin >> n;

    int x;
    for(int i = 0; i < n; i++){
        std::cout << "Enter a value: ";
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "Sum = " << sum_vector(v) << std::endl;
}