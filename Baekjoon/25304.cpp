#include <iostream>

int main() {
    int N, tot, sum = 0, x, y;
    std::cin >> tot;
    std::cin >> N;
    for(int i = 0; i < N; i++){
        std::cin >> x >> y;
        sum += x*y;
    }

    if( sum == tot){
        std::cout << "Yes";
    }
    else{
        std::cout << "No";
    }

    return 0;
}
