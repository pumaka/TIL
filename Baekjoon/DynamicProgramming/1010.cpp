// byproduct of plagerism
//
#include<iostream>
using namespace std;

int N, K;
long long DP[31][31];

int main()
{
    int T;
    cin>>T;
    for(int l = 0; l < T; l++){
        cin >> N >> K;
        int tmp;
        if(K > N){
            tmp = K;
            K = N;
            N = tmp;
        }
    
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
	    cout << DP[N][K] << "\n";
    }
    return 0;
}
