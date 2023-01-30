#include <stdio.h>
#include <time.h>

int fact(int N){
    if(N == 1){
        return 1;
    }
    if(N==0){
        return 1;
    }
    return N*fact(N-1);
}

int main() {
    int N= 0, K =0;
    
    scanf("%d %d", &N, &K);
    printf("%d",fact(N)/(fact(K)*fact(N-K)));

    return 0;
}
