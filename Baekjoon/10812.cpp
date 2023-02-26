#include <iostream>

int main(){
    int N, M;
    std::cin >> N >> M;
    int arr[N], tarr[N];
    for(int i = 1; i<= N; i++){
        arr[i-1] = i;
        tarr[i-1] = i;
    }
    int a,b,c;
    for(int i = 0; i < M; i++){
        std::cin >> a >> b >> c;
        b = b+1;
        for(int l = 0; l < b-c; l++){
            arr[a-1+l] = tarr[c+l-1];
        }

        for(int l = 0; l < c-a; l++){
            arr[b-(c-a)-1+l] = tarr[a-1+l];
        }
        
        for(int l = 0; l < N; l++){
            tarr[l] = arr[l];
        }
    }
    
    for(int i = 0; i < N; i++){
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
