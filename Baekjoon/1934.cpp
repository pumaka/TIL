#include <cstdio>
#include <algorithm>

int Euclid_GCD(int x, int y){
    if(x%y == 0){
        return y;
    }
    else if(x%y == x){
        return 1;
    }
    else{
        return Euclid_GCD(y, x%y);
    }
}

int Euclid_LCM(int x, int y){
    int GCD, LCM;
    
    if(x > y){
        GCD = Euclid_GCD(x,y);
    }
    else{
        GCD = Euclid_GCD(y,x);
    }
    
    LCM = (x*y)/GCD;
}

int main(){
    int N;
    int x, y;
    scanf("%d", &N);
    for(int i = 0 ; i < N; i++){
        scanf("%d %d", &x, &y);
        printf("%d\n",Euclid_LCM(x, y));
    }
    
    return 0;
}
