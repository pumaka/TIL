
#include <cstdio>
#include <algorithm>
#include <vector>

int main() {
    int N, x;
    std::vector<int> v;
    int oper[4] = {0};
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        v.push_back(x);
    }
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        oper[i];
    }
    
    std::sort(v.begin(), v.end());
    
    // largest
    int largest = 0;
    
    
    // smallest
    int smallest = 0;


    return 0;
}
