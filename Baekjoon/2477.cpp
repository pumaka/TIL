#include <iostream>

int main() {
    int mps;
    std::cin >> mps;
    int max_h = 0, max_w = 0, min_h = 500, min_w = 500;
    int direction = 0, num = 0;
    for(int i = 0 ; i < 6; i++){
        std::cin >> direction >> num;
        if(direction == 3 || direction == 4){
            if(num > max_h){
                max_h = num;
            }
            if(num < min_h){
                min_h = num;
            }
        }
        else{
            if(num > max_w){
                max_w = num;
            }
            if(num < min_w){
                min_w = num;
            }
        }
    }
    std::cout << ((max_h*max_w) - (min_h*min_w))*mps << "\n";

    return 0;
}
