#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N = 0;
    cin >> N;
    while(N!= -1){
        vector<int> v;
        for(int i = 1; i <= N; i++){
            if(N%i == 0){
                v.push_back(i);
            }
        }
        int sum = 0;
        for(int i = 0; i < v.size()-1; i++){
            sum+=v[i];
        }
        if(sum == N){
            cout << N << " = ";
            for(int i = 0; i < v.size() - 2; i++){
                cout << v[i] << " + ";
            }
            cout << v[v.size() -2] << "\n";
        }
        else{
            cout << N << " is NOT perfect.\n";
        }
        cin >> N;
    }
    return 0;
}
