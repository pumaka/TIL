#include <cstdio>
#include <algorithm>

int Euclid(int x, int y){
    if(x%y == 0){
        return y;
    }
    else if(x%y == x){
        return 1;
    }
    else{
        return Euclid(y, x%y);
    }
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    
    int GCD, LCM;
    
    if(x > y){
        GCD = Euclid(x,y);
    }
    else{
        GCD = Euclid(y,x);
    }
    
    LCM = (x*y)/GCD;
    
    printf("%d\n", GCD);
    printf("%d", LCM);
    
    return 0;
}
