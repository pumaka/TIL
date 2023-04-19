#include <set>
#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
	ios_base::sync_with_stdio(false);
    int n, ans = 0;
    set<string> m;
    string s;
    cin >> n;
    for(int i = 0; i < n;i++){
        cin >> s;
        if(s == "ENTER") m.clear();
        else if (m.find(s) == m.end()){
            m.insert(s);
            ans++;
        }
    }
    cout << ans;
    return 0;
}

