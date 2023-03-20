#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double V, A, B;
    cin >> A >> B >> V;
    if ((V-A)/(A-B) > int(V-A)/int(A-B)){
      cout << (int(V-A)/int(A-B))+2;
    }
    else{
      cout << (int(V-A)/int(A-B))+1;
    }
    return 0;
}
