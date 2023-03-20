#include <stdio.h>

int main(){
    int N, K, n = 0;
    scanf("%d %d", &N, &K);
    int mx = -2147483648;
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    if(N == K){
        for(int i = 0 ; i < N; i++){
            n+=arr[i];
        }
        mx = (mx<n)?n:mx;
    }
    else{
        for(int i = K ; i < N; i++){
            if(i == K){
                for(int l = 0; l < i; l++){
                    n+=arr[l];
                }
                mx = (mx<n)?n:mx;
            }
            n -= arr[i-K];
            n += arr[i];
            mx = (mx<n)?n:mx;
        }
    }
    printf("%d", mx);
    return 0;
}