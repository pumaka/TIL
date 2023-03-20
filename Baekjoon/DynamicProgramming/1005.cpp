#include <iostream>
#include <math.h>
#include <vector>
#include <queue>

int main(){
    int T, N, K, time;
    vector<int> v;
    int start, end;
    vector<int> x;
    vector<vector<int>> f;
    int vic;

    cin >> T;
    cin >> N >> K;
    for(int l = 0; l < T; l++){
        for(int i =0 ; i < N ; i++){
            cin >> time;
            v.push_back(time);
        }
        for (int s = 0; s < K; s++){
            cin >> start >> end;
            x.push_back(start);
            x.push_back(end);
            f.push_back(x);


            x.clear()
        }
        cin >> vic;
    }
}
