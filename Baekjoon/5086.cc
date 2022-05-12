#include <iostream>

int main() {
    int x = 1, y = 1;
    std::cin >> x  >> y;
    while(x != 0 && y!= 0){
        if(y%x == 0){
            printf("factor\n");
        }
        else if(x%y == 0){
            printf("multiple\n");
        }
        else{
            printf("neither\n");
        }
        std::cin >> x  >> y;
    }
    return 0;
}
