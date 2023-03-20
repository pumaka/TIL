#include <iostream>

int main(){
    int N;
    std::cin >> N;
    int cnt = 1;
    for(int i = 1; i < 2*N; i++){
        if(i <= N){
            for(int l = 0; l< N-i; l++){
                std::cout<< " ";
            }
            for(int l = 0; l<2*i-1; l++){
                std::cout << "*";
            }
            std::cout << "\n";
        }
        else{
            int t = i-2*cnt-1;
            for(int l = 0; l< N-1-t; l++){
                std::cout << " ";
            }
            for(int l = 0; l<2*t+1; l++){
                std::cout << "*";
            }
            std::cout << "\n";
            cnt++;
        }
    }
    return 0;
}
