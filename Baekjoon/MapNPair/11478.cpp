#include <iostream>
#include <string>
#include <map>

using namespace std;

int recurser(string s){
    map<string, int> m;
    for(int i = 0; i < s.size(); i++){
        string tmp = "";
        for(int l = i; l < s.size(); l++){
            tmp += s[l];
            m.insert({tmp, 1});
        }
    }
    return m.size();
}

int main() {
    string s;
    cin >> s;
    cout << recurser(s);
}
