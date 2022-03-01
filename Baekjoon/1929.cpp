#include <iostream>

using namespace std;

int main(){
    int arr[1000001] = {0};
    int M, N;
    cin >> M >> N;
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i < N+1; i++){
        for(int l = 2*i; l < N+1; l+=i ){
                arr[l] = 1;
        }
    }
    for(int i = M; i < N+1; i++){
        if(arr[i] == 0) cout << i << "\n";
    }
}