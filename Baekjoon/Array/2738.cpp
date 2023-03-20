#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    int A[x][y] = {0}, B[x][y] = {0};
    
    for(int i = 0 ; i < x; i++){
        for(int l = 0; l < y; l++){
            std::cin >> A[i][l];
        }
    }
    
    for(int i = 0 ; i < x; i++){
        for(int l = 0; l < y; l++){
            std::cin >> B[i][l];
        }
    }
    
    for(int i = 0 ; i < x; i++){
        for(int l = 0; l < y; l++){
            std::cout << A[i][l] + B[i][l] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}
