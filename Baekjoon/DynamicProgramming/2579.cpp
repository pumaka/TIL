#include <cstdio>
#define Max(a,b) ((a>b)?a:b)
int stair_value[301];
int dp[301];
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        scanf("%d", &stair_value[i]);

    }
    dp[0] = 0;
    dp[1] = stair_value[1];
    dp[2] = stair_value[1] + stair_value[2];
    for (int i = 3; i <= n; i++)
    {
        dp[i] = stair_value[i] + (Max(dp[i - 3] + stair_value[i-1], dp[i - 2]));
    }
    printf("%d", dp[n]);
    return 0;
}