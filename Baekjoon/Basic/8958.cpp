#include <iostream>
#include <string>

using namespace std;

int main(){
    string A;
    int T, answer = 0;
    cin >> T;
    for (int i = 0 ; i < T; i++){
        int N[80] = {0};
        cin >> A;
        if(A[0] == 'O') N[0] = 1;
        else N[0] = 0;
        for (int l = 1; l < A.size(); l++){
            if(A[l] == 'O'){
                N[l] = N[l-1] + 1;
            }
        }
        for(int s = 0; s < 80; s++){
            answer += N[s];
        }
        cout << answer << "\n";
        answer = 0;
    }
    return 0;
}