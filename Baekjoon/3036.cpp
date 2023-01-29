#include <iostream>

using namespace std;

int gcd(int a, int b){
        int temp = 0;
        if(b>a){
            temp = b;
            b = a;
            a = temp;
        }
        while(a%b != a){
            if(a%b == 0){
                return b;
            }
            temp = a;
            a = b;
            b = temp%a; 
        }
}

int main() {
    int div = 0, N = 0;
    cin >> N;
    int arr[N] = {0};
    for(int i = 0; i < N; i++){
            cin >> arr[i];
    }
    for(int i =1 ; i < N; i++){
        int temp = gcd(arr[0], arr[i]);
        cout << arr[0]/temp << "/" <<arr[i]/temp << "\n";
    }

    return 0;
}

