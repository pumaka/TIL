#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a%b == 0) return b;
    return gcd(b, a%b);
}

int main () {
    int n;
    cin >> n;
    int arr[n], sub[n-1];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
        if(i != 0) sub[i -1] = arr[i] - arr[i-1];
    }
    
    int gd = (sub[0] > sub[1])?gcd(sub[0],sub[1]):gcd(sub[1], sub[0]);
    for(int i = 2; i < n-1; i++){
        gd = (gd > sub[i])?gcd(gd,sub[i]):gcd(sub[i], gd);
    }
    
    int sm = 0;
    for(int i = 0; i < n-1; i++){
        sm += (sub[i]/gd) - 1;
    }
    
    cout << sm;
    return 0;
}
