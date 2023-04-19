#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(string a, string b){
    if(a[0] == b[0]) cmp(a.erase(0,1), b.erase(0,1));
    return a > b;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    string name, state;
    unordered_map<string, int> m;
    vector<string> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> name >> state;
        if(state == "enter") m[name] = 1;
        else m[name] = 0;
    }

    for(const auto i: m){
        if(i.second == 1){
            v.push_back(i.first);
        }
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}
