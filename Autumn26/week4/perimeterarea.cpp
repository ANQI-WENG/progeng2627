#include <iostream>

double periarea(double l, double w, double& perimeter, double& area){
    bool positive;
    area = l * w;
    perimeter = 2 * (l + w);
    if((area < 0)||(perimeter < 0)){
        positive = false;
    }
    else{
        positive = true;
    }
    return positive;
}

int main(){
    double l, w, area, perimeter;
    std::cout << "Length of rectangle = ";
    std::cin >> l;
    std::cout << "Width of rectangle = ";
    std::cin >> w;
    if(periarea(l, w, perimeter, area)){
        std::cout << "Area = " << area << std::endl;
        std::cout << "Perimeter = " << perimeter << std::endl;
    }
    else{
        std::cout << "Error, values cannot be negative. " << std::endl;
    }
}