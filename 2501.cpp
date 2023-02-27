#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int N, K;
    cin >> N >> K;
    
    for(int i = 1; i <= N; i++){
        if(N%i == 0){
            v.push_back(i);
            if(v.size() == K){
                break;
            }
        }
    }
    if(v.size() < K){
        cout << 0;
    }
    else{
        cout << v[v.size()-1];
    }
    return 0;
}
