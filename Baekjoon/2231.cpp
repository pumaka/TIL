#include <iostream>

using namespace std;

int digit_summation(int N){
    int sum = 0;
    while(N != 0){
        sum += N%10;
        N = N/10;
    }
    return sum;
}

int main(){
    int N, sum = 0;
    cin >> N;
    for(int i = 1; i < N+1; i++){
        if(N == i + digit_summation(i)){
            cout << i;
            break;
        }
        if(i == N){
            cout << 0;
        }
    }
    return 0;
}