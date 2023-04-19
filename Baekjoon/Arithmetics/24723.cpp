#include <iostream>

using namespace std;

int pow(int n, int k){
    int ans = 1;
    for(int i = 0; i < k; i++){
        ans *= n;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << pow(2,n);
    return 0;
}
