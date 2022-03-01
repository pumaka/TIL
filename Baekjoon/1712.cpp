#include <iostream>

using namespace std;

int main() {
    long long A,B,C;
    int count = 1;
    cin >> A >> B >> C;
    if(B >= C){
        cout << -1;
    }
    else{
        count = (A/(C-B))+1;
        cout << count;
    }
    return 0;
}
