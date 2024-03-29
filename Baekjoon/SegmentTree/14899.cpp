// from https://www.acmicpc.net/source/51041054

#include <cstdio>
#include <cmath>

int N, S[20]{}, min = 1e9;
void dfs(int idx, int start, int sum) {
    if (idx == N / 2) {
        if (min > std::abs(sum)) min = std::abs(sum);
        return;
    }
    if (start < N - 1){
        dfs(idx+ 1, start + 1, sum - S[start]);
        dfs(idx, start + 1, sum);
    }
}

int main(void) {
    int sum = 0, num; scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &num);
            sum += num;
            S[i] += num;
            S[j] += num;
        }
    }
    dfs(0, 0, sum);
    printf("%d", min);
}
