#include <iostream>

using namespace std;

int main(){
    int N, c = 2;
    cin >> N;
    if(N == 1){
        return 0;
    }
    while (N > 1){
        if(N%c == 0){
            cout << c << "\n";
            N = N/c;
        }
        else{
            c++;
        }
    }
    return 0;
}