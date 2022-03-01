#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    char A;
    int time = 0;
    cin >> s;
    for ( int i = 0; i < s.size(); i++){
        A = s[i];
        if(int(A) >= int('S')){
            A -= 1;
        }
        if(A == 'Y'){
            A -= 1;
        }
        cout << int(A)-65 << " " << A << "\n";
        time += ((int(A) - 65)/3)+3;
    }
    cout << time;
    return 0;
}
