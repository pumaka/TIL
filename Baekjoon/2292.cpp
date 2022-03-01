#include <iostream>

using namespace std;

int main(){
    int x;
    int y = 0;
    cin >> x;
    while (x > (6*y)+1){
      x  = x - (6*y);
      y++;
    }
    y++;
    cout << y << endl;
    return 0;
}
