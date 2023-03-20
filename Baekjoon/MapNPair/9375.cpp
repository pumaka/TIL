#include <iostream>
#include <string>
#include <vector>

using namespace std;

int comb(int N, int K)
{
    long long DP[1001][1001];

	DP[0][0] = 1;
	DP[1][0] = 1;
	DP[1][1] = 1;

	for (int i = 2; i <= N; i++)
		for (int j = 0; j <= i; j++)
		{
			if (j == 0) DP[i][0] = 1;
			else if (j == i) DP[i][j] = 1;
			else DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j]);
		}
    return DP[N][K];
}

int main() {
    int N, n, is_there, ans;
    string sa, s;
    vector<pair<string, int>> v;
    
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> n;
        for(int l = 0 ; l < n; l++){
            cin >> sa >> s;
            is_there = 0;
            for(int m = 0; m < v.size(); m++){
                if(v[m].first == s){
                    is_there = 1;
                    v[m].second++;
                }
            }
            if(is_there == 0){
                v.push_back({s, 1});
            }
        }
        ans = 1;
        for(int l = 0; l < v.size(); l++){
            ans = ans*comb(v[l].second+1,1);
        }
        ans -= 1;
        cout << ans << "\n";
        v.clear();
    }
    
    return 0;
}
