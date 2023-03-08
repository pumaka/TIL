#include <iostream>

using namespace std;

int main() {
    int N, K, cnt = 0;
    cin >> N >> K;
    int coin[10];
    for(int i = 0; i < N; i++){
        cin >> coin[i];
    }
    while(K > 0 || N >= 0){
        if(coin[N-1] <= K){
            cnt++;
            K-=coin[N-1];
        }
        else{
            N = N-1;
        }
    }
    cout << cnt << endl;
    return 0;
}
