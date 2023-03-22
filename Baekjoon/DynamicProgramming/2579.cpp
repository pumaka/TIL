#include <iostream>

using namespace std;

int arr[301] = {0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int sum = 0;

    // get inputs
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // down-up search
    sum += arr[n-1];
    for(int i = n-1; i >= 3; i--){
        if(arr[i-1] > arr[i-2]){
            //cout << "1: " << arr[i-1] <<"  |3: " << arr[i-3] << endl;
            sum += (arr[i-1]+arr[i-3]);
            i-=2;
        }
        else{
            //cout << "2: " << arr[i-2] << endl;
            sum += arr[i-2];
            if((i-2) == 1) sum += arr[0];
            if((i-2) == 2) sum += (arr[i-3]>arr[i-4])?arr[i-3]:arr[i-4];
            i--;
        }
    }

    cout << sum;

    return 0;
}