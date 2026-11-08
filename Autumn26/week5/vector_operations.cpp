#include <iostream>
#include <vector>

int main(){
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);
    // v: [10, 20]
    // index 0, 1, etc.

    std::cout << v[0] << std::endl;
    std::cout << v[1] << std::endl;

    v[0] = 15;
    // v: [15, 20]

    std::cout << v[0] << std::endl;
    // can't use indexing to access/store values in cells that don't exist e.g [2]

    std::cout << v.size() << std::endl;
    // will print how many cells there are
}