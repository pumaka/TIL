#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

vector<int> people;
vector<int> combination;
vector<vector<int>> combinate_3;

void go(int offset, int k) {
  if (k == 0) {
    combinate_3.push_back(combination);
    return;
  }
  for (int i = offset; i <= people.size() - k; ++i) {
    combination.push_back(people[i]);
    go(i+1, k-1);
    combination.pop_back();
  }
}

int main(){
    int N, M;
    int A, summ, max = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> A;
        people.push_back(A);
    }
    go(0,3);
    for(int i = 0; i < combinate_3.size(); i++){
        summ = accumulate(combinate_3[i].begin(),combinate_3[i].end(),0);
        if(summ >= max && summ <= M){
            max = summ;
        }
    }
    cout << max;
    return 0;
    
}