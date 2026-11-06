#include <iostream>

void myswap(double& n1, double& n2){
    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort_3_numbers(double& s1, double& s2, double& s3){
    //          3 2 1           3 1 2 , 2 1 3 , 3 1 2
    while((s1 > s2)||(s2 > s3)){
        while(s1 > s2){
            myswap(s1, s2);
        }
        while(s2 > s3){
            myswap(s2, s3);
        }
    }
    }

int main(){
    double i, j, k;
    i = 1; j = 2; k = 3;
    sort_3_numbers(i, j, k);
    std::cout << i << " " << j << " " << k << std::endl;
    i = 3; j = 2; k = 1;
    sort_3_numbers(i, j, k);
    std::cout << i << " " << j << " " << k << std::endl;
    i = 2; j = 1; k = 3;
    sort_3_numbers(i, j, k);
    std::cout << i << " " << j << " " << k << std::endl;
    i = 1; j = 3; k = 3;
    sort_3_numbers(i, j, k);
    std::cout << i << " " << j << " " << k << std::endl;
    i = 3; j = 1; k = 1;
    sort_3_numbers(i, j, k);
    std::cout << i << " " << j << " " << k << std::endl;
}