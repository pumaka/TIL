//
// Created by pumak on 3/14/2023.
//
#include <cstdio>

int comb(int n, int k){
    int a;
    bool r;
    a = (n > n-k)?n-k:n;
    r = (n > n-k)?1:0
    int num[a];
    int denum[a];


    if(r){
        for(int i = 0; i < n-k; i++){
            num[i] = n-i;
            denum[i] = n-k-i;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            num[i] = n-i;
            denum[i] = k-i;
        }
    }


}

int main(){
    int n;
    scanf("%d", &n);
    int num[n];
    // 0000 is allowed

    // idea, get combination. every time 00 increases, the n decreases by 1


    return 0;
}