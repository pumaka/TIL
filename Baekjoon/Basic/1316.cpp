#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    string s;
    cin >> N;
    int counter = N;
    for(int i = 0; i < N; i++){
        cin >> s;
        char comparator = ' ';
        int alph[26] = {0};
        for(int l = 0; l < s.size(); l++){
            if(comparator != s[l]){
                comparator = s[l];
                alph[s[l]-'a']++;
            }
            if (alph[s[l]-'a'] >= 2){
                counter--;
                break;
            }

        }
    }
    cout << counter;
    return 0;
}
