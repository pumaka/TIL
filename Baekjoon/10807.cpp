#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int lis[N], num;
   
    for(int i = 0; i < N; i++){
        std::cin >> *(lis+i);
    }
    
    std::cin >> num;
    
    int cnt = 0;
    
    for(int i = 0 ; i < N; i++){
        if(lis[i] == num){
            cnt++;
        }
    }
    
    std::cout << cnt;
}
