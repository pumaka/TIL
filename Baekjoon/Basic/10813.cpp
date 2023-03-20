#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;
    int arr[N]= {0};
    for(int i = 0; i<N; i++) arr[i] = i+1;
    int a,b,t1,t2;
    
    for(int i = 0; i < M; i++){
        std::cin >> a >> b;
        t1 = arr[a-1];
        t2 = arr[b-1];
        arr[a-1] = t2;
        arr[b-1] = t1;
    }
    
    for(int i = 0; i<N; i++) std::cout << arr[i] << " ";
    
    return 0;
}
