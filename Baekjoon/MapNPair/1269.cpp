#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    map<int, int> m1, m2;
    
    int tmp;
    for(int i =0; i < x; i++){
        cin >> tmp;
        m1.insert({tmp, 1});
    }
    for(int i =0; i < y; i++){
        cin >> tmp;
        m2.insert({tmp, 1});
    }
    
    for(const auto &i: m2){
        if(m1.find(i.first) == m1.end()){
        }
        else{
            m1[i.first] = 0;
        }
    }
    for(const auto &i: m1){
        if(m2.find(i.first) == m2.end()){
        }
        else{
            m2[i.first] = 0;
        }
    }
    
    int cnt = 0;
    for(const auto &i: m1){
        if(i.second == 1){
            cnt++;
        }
    }
    for(const auto &i: m2){
        if(i.second == 1){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
