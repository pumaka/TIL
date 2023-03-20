#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
    int n, inpt;
    long long int mx = -100000000;
    cin >> n;
    long long int sum[n];
    cin >> sum[0];
    if(sum[0] > mx) mx = sum[0];
    for(int i = 1; i < n; i++){
        cin >> inpt;
        sum[i] = (sum[i-1] < 0)?inpt:(sum[i-1]+inpt);
        if(sum[i] > mx) mx = sum[i];
    }
    
    cout << mx;
    
    return 0;
}
