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


int main(){
    int N;
    int x, y;
    int GCD, LCM;
    scanf("%d", &N);
    for(int i = 0 ; i < N; i++){
        scanf("%d %d", &x, &y);
        if(x > y){
            GCD = Euclid_GCD(x,y);
        }
        else{
            GCD = Euclid_GCD(y,x);
        }
    
        LCM = (x*y)/GCD;
        printf("%d\n",LCM);
        
    }
    
    return 0;
}
