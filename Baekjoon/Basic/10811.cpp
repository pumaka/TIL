#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int arr[N]= {0},tarr[N];
    for(int i = 0; i<N; i++){
        arr[i] = i+1;
        tarr[i] = arr[i];
    }
    int a,b;
    
    for(int i = 0; i < M; i++){
        std::cin >> a >> b;
        int cnt = 1;
        for(int l = a-1; l < b; l++){
            arr[l]= tarr[b-cnt];
            cnt++;
        }
        cnt = 1;
        for(int l = 0; l < N; l++){
            tarr[l] = arr[l];
        }
    }
    
    for(int i = 0; i<N; i++) std::cout << arr[i] << " ";
    
    return 0;
}
