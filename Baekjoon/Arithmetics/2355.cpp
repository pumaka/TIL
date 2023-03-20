#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int b, e, n, sum;
    cin >> b >> e;
    sum = b+e;

    n = (e >= b)?(e-b+1):(b-e+1);

    cout << (sum*n)/2;

    return 0;
}
