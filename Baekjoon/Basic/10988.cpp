#include <iostream>
#include <string>

using namespace std;

int main() {
    int cnt = 0; 
    string s;
    cin >> s;
    for(int i = 0; i < s.length()/2; i++){
        if(s[i] == s[s.length()-1-i]){
            cnt++;
        }
    }
    if(cnt == (s.length()/2)){
        cout << 1;
    }
    else{
        cout << 0;
    }
    
    return 0;
}
