#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, M, counter_B = 64, counter_W = 64;
    cin >> N >> M;
    char board[N][M];
    string b_b = "WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";
    string b_w = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";
    for(int i = 0; i < N; i++){
        for(int l =0; l < M; l++){
            cin >> board[i][l];
        }
    }
    
    for(int i = 0; i < N-7; i++){
        for(int l = 0; l < M-7; l++){
            int min_B = 0, min_W = 0;
            for(int s = 0; s < 8; s++){
                for(int r = 0; r < 8; r++){
                    if(board[i+s][l+r] != b_b[(8*s)+r]){
                        min_B++;
                    }
                    if(board[i+s][l+r] != b_w[(8*s)+r]){
                        min_W++;
                    }
                }
            }
            if (counter_B > min_B){
                counter_B = min_B;
            }
            if (counter_W > min_W){
                counter_W = min_W;
            }
        }
    }
    if(counter_B < counter_W){
        cout  << counter_B;
    }
    else{
        cout << counter_W;
    }
}
