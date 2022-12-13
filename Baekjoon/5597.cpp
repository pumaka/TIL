#include <iostream>
#include <algorithm>

int main() {
    std::vector<int> v;
    for(int i = 1; i < 31; i++){
        v.push_back(i);
    }
    int x;
    for(int i = 0; i < 28; i++){
        std::cin >> x;
        v.erase(std::remove(v.begin(), v.end(), x), v.end());
    }
    
    for(int i = 0; i <v.size(); i++){
        std::cout << v[i] << std::endl;
    }
}
