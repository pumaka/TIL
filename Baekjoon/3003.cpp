#include <iostream>

int main() {
    int N[6], M[6] = {1, 1, 2, 2, 2, 8};
    for(int i = 0 ; i < 6; i++){
        std::cin >> N[i];
    }
    
    for(int i = 0 ; i < 6 ; i++){
        std::cout << M[i] - N[i] << ' ';
    }
    
    return 0;
}
