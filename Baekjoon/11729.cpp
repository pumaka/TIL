#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

void hanoi(int A, int B, int C, int N){
    if(N <= 0){
        return ;
    }
    hanoi(A,C,B, N-1);
    cout << A << " " << C << "\n";
    hanoi(B,A,C, N-1);
}

int main(){
    int T;
    cin >> T;
    printf("%d\n", (int)pow(2,T)-1);
    hanoi(1,2,3,T);
    return 0;
}

