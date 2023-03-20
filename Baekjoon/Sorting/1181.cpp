#include <string>
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

int main(){
    int N;

    cin >> N;
    string s[N];
    vector<pair<int,string>> v;
    pair<int, string> p;

    for(int i = 0; i < N; i++){
        cin >> s[i];
        p = make_pair(s[i].length(), s[i]);
        v.push_back(p);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        if(i >= 1){
            if(v[i-1].second == v[i].second){

            }
            else{
                cout << v[i].second << "\n";
            }
        }
        else{
            cout << v[i].second << "\n";
        }
    }

    return 0;
}
