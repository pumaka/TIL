#include <iostream>
#include <cstdio>
#include <algorithm>

int main(){
    int x[5] = {0}, sum = 0;
    for(int i = 0; i < 5; i++){
        std::cin >> x[i];
        sum+=x[i];
    }
    std::sort(x, x+5);
    printf("%d\n", sum/5);
    printf("%d\n", x[2]);
    return 0;
}

