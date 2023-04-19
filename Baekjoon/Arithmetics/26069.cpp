#include <set>
#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    string s1, s2;
    cin >> n;
    set<string> rd; //rainbow dance
    rd.insert("ChongChong");
    for(int i = 0; i < n; i++){
        cin >> s1 >> s2;
        if(rd.find(s1) != rd.end()){
            rd.insert(s2);
        }
        if(rd.find(s2) != rd.end()){
            rd.insert(s1);
        }
    }
    cout << rd.size();
    return 0;
}
