#include <cstdio>
#include <algorithm>

int main(){
    int N;
    scanf("%d", &N);
    int* divsr = new int[N];
    
    for(int i = 0; i < N; i++){
        scanf("%d", divsr+i);
    }
    
    std::sort(divsr, divsr+N);
    
    printf("%d", *(divsr)**(divsr+N-1));
    return 0;
}
