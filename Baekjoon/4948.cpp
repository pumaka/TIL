#include <iostream>

using namespace std;

int main(){
    int arr[246913] = {0};
    int N=1, counter = 0;
    while(cin >> N){
        if(N== 0){
            break;
        }
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i < (2*N)+1; i++){
        for(int l = 2*i; l < (2*N)+1; l+=i ){
                arr[l] = 1;
        }
    }
    for(int i = N+1; i < (2*N)+1; i++){
        if(arr[i] == 0) counter++;
    }
    cout << counter << "\n";
    counter = 0;
    }
    return 0;
}