#include <iostream>

using namespace std;



int main(){
    int arr[10001] = {0};
    int N, T;
    arr[0] = 1;
    arr[1] = 1;
    cin >> T;
    for(int s = 0; s < T; s++){
        cin >> N;
        for(int i = 2; i < N+1; i++){
            for(int l = 2*i; l < N+1; l+=i ){
                arr[l] = 1;
            }
        }
        for(int i = N/2; i < N-1; i++){
            if(arr[i] == 0 && arr[N-i] == 0){
                cout << N-i << " " << i << "\n";
                break;
            }
        }
    }
    
    return 0;
}