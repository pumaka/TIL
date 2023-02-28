#include <iostream>
#include <string>

using namespace std;

int main() {
    string s[5];
    int max = 0;
    for(int i = 0; i < 5; i++){
        cin >> s[i];
        if(max < s[i].length()){
            max = s[i].length();
        }
    }

    for(int i = 0; i < max*5; i++)((i/5) < s[i%5].length())?cout<< s[i%5][i/5]: cout  << "";

    return 0;
}
