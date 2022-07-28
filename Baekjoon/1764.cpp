#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    string dudes[x];
    map<string, int> bojab;
    
    for(int i = 0 ; i < x; i++){
        cin >> dudes[i];
    }
    
    string temp;
    for(int i = 0 ; i < y; i++){
        cin >> temp;
        bojab.insert({temp, 1});
    }
    
    /*
    find out why this is wrong
    
    for(const auto &i : dudes){
        if(bojab[i] == 1){
            bojab[i] = 0;    
        }
        
    }
    */
    
    for(const auto &i : dudes){
        if(bojab.find(i) == bojab.end()){
        }
        else{
            bojab[i] = 0;
        }
    }
    
    vector<string> v;
    int cnt = 0;
    for(const auto &i : bojab){
        if(i.second == 0){
            v.push_back(i.first);
            cnt++;
        }
    }
    
    cout << cnt << "\n";
    for(const auto &i : v){
        cout << i << "\n";
    }
    
    return 0;
}
