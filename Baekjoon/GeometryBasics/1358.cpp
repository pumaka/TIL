#include <iostream>
#include <cmath>

using namespace std;

int distance(int x, int y, int W, int H, int X, int Y){
    // inside return 1, outside return 0
    if((X+W >= x && X <= x) && (Y+H >= y && y >= Y)){
        return 1;
    }
    if(sqrt(pow(X-x,2)+pow(Y+(H/2)-y,2)) <= (H/2)){
        return 1;
    }
    if(sqrt(pow(X+W-x,2)+pow(Y+(H/2)-y,2)) <= (H/2)){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int W, H, X, Y, P;
    cin >> W >> H >> X >> Y >> P;
    int x, y, cnt = 0;
    for(int i = 0; i < P; i++){
        cin >> x >> y;
        if(distance(x,y,W,H,X,Y)){
            cnt++;
        }
    }
    
    cout << cnt;

    return 0;
}
