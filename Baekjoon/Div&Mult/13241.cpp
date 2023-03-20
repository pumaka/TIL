#include <cstdio>

long long int gcd(long long int a,long long int b){
    long long int ta = a, tb = b;
    a = (ta>tb)?ta:tb;
    b = (ta>tb)?tb:ta;
    if(a%b == 0) return b;
    return gcd(b, a%b);
}

int main() {
    long long int a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld", a*b/gcd(a,b));
    return 0;
}
