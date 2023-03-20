#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main(){
        int N, age;
        string name;
        cin >> N;
        vector<pair<int,string>> v;

        for(int i = 0; i < N; i++){
                cin >> age >> name;
                v.push_back(make_pair(age,name));
        }

        stable_sort(v.begin(), v.end(), [](const auto& lhs, const auto& rhs){return lhs.first < rhs.first;});
        for(int i = 0; i < N; i++){
                cout << v[i].first << " " << v[i].second << "\n";
        }

        return 0;
}
