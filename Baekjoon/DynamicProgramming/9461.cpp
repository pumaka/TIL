#include <cstdio>
#include <cmath>

int main(){
    int n, tc; // 1 <= n <= 100
    scanf("%d", &tc);
    long long int P[101];
    for(int l = 0; l < tc; l++) {
        scanf("%d", &n);
        P[1] = 1;
        P[2] = 1;
        P[3] = 1;
        P[4] = 2;
        P[5] = 2;
        for (int i = 6; i <= n; i++) {
            P[i] = P[i - 1] + P[i - 5];
        }
        printf("%lld\n", P[n]);
    }
    return 0;
}