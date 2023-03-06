#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int swtch(vector<int> &ta, vector<int> &tb, int offset){
    int tmp;
    tmp = ta[offset];
    ta[offset] = tb[offset];
    tb[offset] = tmp;
    return 0;
}

vector<vector<int>> tm_comp(vector<vector<int>> &ans, vector<int> &a, int from, int to){
    if(from == to){
        ans.push_back(a);
    }
    for(int i = from; i < to; i++){
        a.push_back(i);
        tm_comp(ans, a, i+1, to);
        a.pop_back();
    }
    return ans; 
}

int solve(vector<vector<int>> v,int n, int k){
    vector<vector<int>> ans, tmp_v;
    vector<int> as;
    int a, b, mn = 201;
    
    tm_comp(ans, as, n, k);
    
    for(int i = 0; i < ans.size(); i++){
        a = 0;
        b = 0;
        tmp_v = v;
        for(int l = 0; l < ans[i].size(); l++){
            for(int s = l; s < ans[i].size(); s++){
                a+=v[ans[i][l]][ans[i][s]]+v[ans[i][s]][ans[i][l]];
                tmp_v[ans[i][l]][ans[i][s]] = 0;
                tmp_v[ans[i][s]][ans[i][l]] = 0;
            }
        }
        for(int l = 0; l < tmp_v.size(); l++){
            for(int s = l; s < tmp_v.size(); s++){
                b+=tmp_v[s][l];
            }
        }
        if(mn > abs(a-b)){
            mn = abs(a-b);
        }
    }
    return mn;
}

int main() {
    int n, tp;
    cin >> n;
    vector<int> tmp;

