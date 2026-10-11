#include <iostream>

int main(){
    double l, w;

    std::cout << "enter length of rectangle" << std::endl;
    std::cin >> l;

    std::cout << "enter width of rectangle" << std::endl;
    std::cin >> w;

    std::cout << "perimeter of this rectangle = " << l + l + w + w << std::endl;
    std::cout << "area od this rectangle = " << w * l << std::endl;
    
}