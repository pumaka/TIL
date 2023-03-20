#include <cstdio>

using namespace std;

int main() {
    int N, M, sum_a = 0, sum;
    scanf("%d %d", &N, &M);
    int arr[N], idx[M][2];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        sum_a += arr[i];
    }
    for(int i = 0; i < M; i++){
        scanf("%d %d", &idx[i][0], &idx[i][1]);
        if(idx[i][1] - idx[i][0] + 1 < N/2 ){
            sum = 0;
            for(int l = idx[i][0]-1; l <= idx[i][1] -1; l++){
                sum += arr[l];
            }
            printf("%d\n", sum);
        }
        else{
            sum = sum_a; 
            for(int l = 0; l < idx[i][0] - 1 ; l++){
                sum -= arr[l];
            }
            for(int l = idx[i][1]; l < N; l++){
                sum -= arr[l];
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}