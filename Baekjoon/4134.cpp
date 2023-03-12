#include <cstdio>
#include <cmath>

using namespace std;

bool is_prime(unsigned int n){
    bool is_p = true;
    if (n == 0 || n == 1) {
        is_p = false;
    }
    for (unsigned int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            is_p = false;
            break;
        }
    }

    return is_p;
}

int main() {
    int n;
    unsigned int p;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        scanf("%u",&p);
        while(!is_prime(p++)) if(p > 4000000007) break;
        printf("%u\n", --p);
    }
    return 0;
}