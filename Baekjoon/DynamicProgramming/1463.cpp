#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int dp[n];
    for(int i = 0; i < n; i++){
        dp[i] = 0;
    }

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    // down up search
    for(int i = 4 ; i <= n; i++){
        dp[i] = dp[i-1] + 1;
        if(i % 3 == 0) dp[i] = min(dp[i/3]+1, dp[i]);
        if(i % 2 == 0) dp[i] = min(dp[i/2]+1, dp[i]);
    }

    cout << dp[n];
    return 0;
}