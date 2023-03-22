#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;

using namespace std;

int mx = 0;

// dfs search
int search(vector<vector<int>> node, vector<int> time, int target, int sum = 0){
    sum += time[target];
    if(node[target].size() == 0){
        if(mx < sum){
            mx = sum;
        }
        return 0;
    }
    int tmp;
    for(int i = 0; i < node[target].size(); i++){
        tmp = node[target][i];
        node[target].erase(node[target].begin());
        search(node, time, tmp, sum);
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin.tie(0);

    // variable definition
    int T, N, K, W, from, to, tmp;
    vector<vector<int>> node;
    vector<int> v, time;

    cin >> T;
    //loop for number of test cases
    for(int i = 0; i < T; i++) {
        //auto start = high_resolution_clock::now();
        cin >> N >> K;

        for (int l = 0; l < N; l++) {
            cin >> tmp;
            time.push_back(tmp);
            node.push_back(v);
        }

        for (int l = 0; l < K; l++) {
            cin >> from >> to;
            to--;
            from--;
            //create node to ensure path
            node[to].push_back(from);
        }
        cin >> W;

        search(node, time, W-1);

        cout << mx << "\n";

        mx = 0;
        time.clear();
        node.clear();
        //auto stop = high_resolution_clock::now();
        //auto duration = duration_cast<microseconds>(stop - start);
        //cout << duration.count() << endl;
    }
    return 0;
}
