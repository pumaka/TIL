#include <cstdio>
#define lim 1000000

int main() {
    int n, t;
    int prm[lim+1] = {0};
    scanf("%d", &t);

    // Eratos algo
    for (int i = 2; i < lim; i++) {
        if (prm[i] == 1) continue;
        for (int j = 2*i ; j < lim; j += i) {
            // disregard all the multipliers
            prm[j] = 1;
        }
    }

    for (int i = 0; i < t; i++) {
        int cnt = 0;
        scanf("%d", &n);
        for (int j = 2; j <= n/2; j++) {
            if (prm[j]) continue;
            if (!prm[n-j] && !prm[j]) cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}