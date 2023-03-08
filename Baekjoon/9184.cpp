#include <iostream>
#include <cstdio>

int sm[21][21][21] = {0};

int w(int a, int b, int c){
    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }
    if(a > 20 || b > 20 || c > 20){
        return w(20,20,20);
    }
    if(sm[a][b][c]){
        return sm[a][b][c];
    }
    if(a<b && b < c){
        return sm[a][b][c] = w(a,b,c-1)+ w(a,b-1,c-1) - w(a,b-1,c);
    }
    else{
        return sm[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
    }
}

int main() {
    int sm[21][21][21] = {0};
    int a = 1, b = 1, c = 1;
    while(1){
        std::cin >> a >> b >> c;
        if(a == -1 && b == -1 && c == -1) break;
        printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
    }
    return 0;
}
