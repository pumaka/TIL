#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int s[3];
    while(1){
        cin >> s[0] >> s[1] >> s[2];
        if(s[0]==0 || s[1] == 0 || s[2] == 0){
            break;
        }
        if(pow(s[2],2) == pow(s[0],2)+pow(s[1],2) ||pow(s[1],2) == pow(s[0],2)+pow(s[2],2) || pow(s[0],2) == pow(s[2],2)+pow(s[1],2)){
            cout << "right\n";
        }
        else{
            cout << "wrong\n";
        }
    }
    return 0;
}
