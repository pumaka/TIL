#include <iostream>

int main() {
    int n, x, y, area = 0;
    int M[101][101] = {0};
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cin >> x >> y;
        for(int l = 0; l < 10; l++){
            for(int t = 0; t < 10; t++){
                M[x+l][y+t] = 1;
            }       
        } 
    }
    for(int i = 0; i<101; i++){
        for(int l = 0; l < 101; l++){
            if(M[i][l] == 1){
                area++;
            }
        }
    }
    std::cout << area;
}
