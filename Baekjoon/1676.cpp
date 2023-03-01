#include <iostream>

using namespace std;

int main() {
    int N, ans= 0;
    cin >> N;
    while(N >= 5){
        ans += N/5;
        N = N/5;
    }
    cout << ans;
    return 0;
}
