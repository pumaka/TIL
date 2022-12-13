#include <iostream>

int main(){
    int A[9][9]= {0};
    int x = 0, max = 0, max_indx = 0;
    for(int i = 0; i < 81; i++){
        std::cin >> x;
        if(x > max){
            max = x;
            max_indx = i;
        }
    }
    
    std::cout << max << "\n";
    std::cout << (max_indx/9) + 1 << " " << (max_indx%9) + 1;
    
    return 0;
}
