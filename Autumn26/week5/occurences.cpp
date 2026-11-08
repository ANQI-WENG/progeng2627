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

    int s;
    std::cout << "Enter s (to return # of occurences of value s in vector): " << std::endl;
    std::cin >> s;
    int occurences = 0;

    for(int j = 0; j < n; j++){
        if(v[j] == s){
            occurences = occurences + 1;
        }
    }

    std::cout << "There are " << occurences << " occurences of " << s << " at indices: " << std::endl;

    for(int j = 0; j < n; j++){
        if(v[j] == s){
            std::cout << j << std::endl;
        }
    }
}