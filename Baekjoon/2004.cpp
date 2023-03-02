#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int tzof5(int n, int ans = 0){
    // 't'railing 'z'eroes 'o'f 'f'actorial 5
    ans += n/5;
    if(n < 5) return ans;
    return tzof5(n/5, ans);
}
int tzof2(int n, int ans = 0){
    // 't'railing 'z'eroes 'o'f 'f'actorial 2
    ans += n/2;
    if(n < 2) return ans;
    return tzof2(n/2, ans);
}

int main() {
    int n, m, ans;
    
    cin >> n >> m;
    
    int tmp = abs(n-m);
    
    // trailing zeros
    ans = min(tzof2(n)-tzof2(m)-tzof2(tmp),tzof5(n)-tzof5(m)-tzof5(tmp));
    /////////////
    
    //print
    cout << ans;

   
    return 0;
}
