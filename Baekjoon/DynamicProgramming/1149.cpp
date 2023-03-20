#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
    int n;
    cin >> n;
    int dp[n][3];
    cin >> dp[0][0] >> dp[0][1] >> dp[0][2];
    for(int i = 1; i < n; i++){
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2];
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + dp[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + dp[i][1];
        dp[i][2] = min(dp[i-1][1], dp[i-1][0]) + dp[i][2];
    }
    
    cout << min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2]);
    return 0;
}
