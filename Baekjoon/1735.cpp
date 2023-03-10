#include <iostream>

using namespace std;

int gcd(long long int a, long long int b){
    if(a%b == 0) return b;
    return gcd(b,a%b);
}


int main() {
    long long int an, ad;
    long long int bn, bd;
    
    cin >> an >> ad;
    cin >> bn >> bd;
    
    long long int ansn, ansd, gd;
    
    ansn = an*bd + bn*ad;
    ansd = ad*bd;
    gd = (ansn>ansd)?gcd(ansn, ansd):gcd(ansd,ansn);
    while(ansn % gd == 0 && ansd % gd == 0 && gd != 1){
        ansn = ansn/gd;
        ansd = ansd/gd;
        gd = (ansn>ansd)?gcd(ansn, ansd):gcd(ansd,ansn);
    }
    
    cout << ansn << " " << ansd;

    return 0;
}
