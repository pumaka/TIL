#include <iostream>

using namespace std;

int arr[501][501] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; 
    cin >> n;
    int sum[n];
    
    //initialize list
    for(int i = 0; i < n; i++) sum[i] = 0;
    
    // get inputs
    for(int i = 0; i < n; i++){
        for(int l = 0; l< i+1; l++){
            cin >> arr[i][l];
        }
    }
    
    // down-up search
    for(int i = 0; i < n; i++){
        sum[i] = arr[n-1][i];
    }
    
    for(int i = n-2; i >= 0; i--){
        for(int l = 0; l <= i; l++){
            sum[l] = (sum[l] > sum[l+1])?sum[l]+arr[i][l]:sum[l+1]+arr[i][l];
        }
    }
    
    cout << sum[0];
    
    return 0;
}
