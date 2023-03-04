#include <iostream>

int cnt_rc = 0, cnt_dn = 0;

int fib_rc(int n){
    cnt_rc++;
    if(n == 1 || n == 2) return 1;
    return fib_rc(n-1)+fib_rc(n-2);
}

int fib_dn(int n){
    int dn[n] = {0};
    cnt_dn = n-2;
    if(n) dn[0] = 1;
    if(n >= 2) dn[1] = 1;
    for(int i = 2; i < n; i++){
        dn[i] = dn[i-1] + dn[i-2];
    }
    return dn[n-1];
}

int main() {
    int a;
    std::cin >> a;
    fib_rc(a);
    fib_dn(a);
    std::cout << (cnt_rc/2)+1 << " " << cnt_dn;
    return 0;
}
