#include <iostream>
using namespace std;

int main() {
    int a=1, b=1, c=1;
    while(1) {
        cin >> a >> b >> c;
        if(a==0 && b ==0 && c==0) break;
        if ((a + b <= c) || (a + c <= b) || (c + b <= a)) cout << "Invalid";
        else if (((a == b) && (c == b))) cout << "Equilateral";
        else if (((a == b) || (c == b) || (a == c))) cout << "Isosceles";
        else cout << "Scalene";
        cout << endl;
    }
    return 0;
}
