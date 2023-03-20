#include <iostream>
#include <algorithm>

using namespace std;

int compare(int i, int j){
    return j < i;
}

int main() {
    int N, k;
    cin >> N >> k;
    int pep[N];
    for(int i = 0; i < N; i++){
        cin >> pep[i];
    }
    
    sort(pep, pep+N, compare);
    
    cout << pep[k-1];

    return 0;
}
