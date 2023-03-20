#include <iostream>
#include <vector>

using namespace std;

int mx = -1000000000;
int mn = 1000000000;

int ops(int a, int b, int op){
    if(op == 1){
        return a+b;
    }
    if(op == 2){
        return a-b;
    }
    if(op == 3){
        return a*b;
    }
    if(op == 4){
        return a/b;
    }
    return b;
}

int solve(vector<int> num, vector<int> op, int val = 0){
    vector<int> tmp_o, tmp_n;
    int tmp;
    
    for(int i = 0; i < op.size(); i++){
        tmp_n = num;
        tmp_o = op;
        tmp = ops(val, tmp_n[1], op[i]);
        tmp_o.erase(tmp_o.begin()+i);
        tmp_n.erase(tmp_n.begin());
        solve(tmp_n , tmp_o, tmp);
    }
    if(op.size() == 0){
    	if(mx < val){
       	    mx = val;
   	}
        if(mn > val){
            mn = val;
        }
    }
    return 0;
}

int main() {
    int N, tmp;
    vector<int> num, op;
    
    cin >> N;
    for(int i = 0 ; i< N; i++){
        cin >> tmp;
        num.push_back(tmp);
    }
    for(int i = 1; i < 5; i++){
        cin >> N;
        for(int l = 0; l < N; l++){
            op.push_back(i);
        }
    }
    
    solve(num, op, num[0]);
    
    cout << mx << "\n" << mn << "\n";
    
    return 0;
}
