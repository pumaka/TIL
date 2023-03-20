#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int mx_x=-10000, mn_x=10000, mx_y=-10000, mn_y=10000, x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(mx_x < x){
            mx_x = x;
        }
        if(mn_x > x){
            mn_x = x;
        }
        if(mx_y < y){
            mx_y = y;
        }
        if(mn_y > y){
            mn_y = y;
        }
    }
    cout << (mx_x - mn_x)*(mx_y - mn_y);
}
