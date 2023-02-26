#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int arr[N] = {0};
    int a,b,c;
    for(int i = 0; i < M; i++){
        std::cin >> a >> b >> c;
        for(int l = a-1; l < b; l++){
            arr[l] = c;
        }
    }
    
    for(int i = 0; i < N; i++){
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
