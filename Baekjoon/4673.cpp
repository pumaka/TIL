#include <iostream>

using namespace std;

int is_self(int n){
    if(n < 10){
        n += n;
    }
    else if(n < 100){
        n += n/10 + n%10;
    }
    else if(n < 1000){
        n += n/100 + (n/10)%10 + n%10;
    }
    else n = n + n/1000 + (n/100)%10 + (n/10)%10 + n%10;
    return n;
}

int main(){
    int N[10036] = {0};
    for(int i = 1; i < 10000; i++){
        N[is_self(i)]++;
    }
    for(int i = 1; i < 10000; i++){
        if(N[i] == 0) cout << i << "\n";
    }
    return 0;
}