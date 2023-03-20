#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int s[3];
    cin >> s[0] >> s[1] >> s[2];
    sort(s, s+3);
    if(s[2] >= s[1]+s[0]) cout << 2*(s[1]+s[0])-1;
    else cout << s[0] + s[1] + s[2];
    return 0;
}
