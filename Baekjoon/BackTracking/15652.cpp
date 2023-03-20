#include <cstdio>
#include <algorithm>
#include <vector>

int dp;

using namespace std;


int print_vec(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}

int dfs(int depth, vector<int> v, vector<int> a){

    if(depth == 0){
        return 0;
    }
    for(int i = 0; i< v.size(); i++){
        while((dp - depth) != a.size()){
            a.pop_back();
        }
        a.push_back(v[i]);
        vector<int> b;
        for(int l = i; l < v.size(); l++){
            b.push_back(v[l]);
        }
        if(a.size() == dp){
            print_vec(a);
        }
        dfs(depth-1, b, a);
    }
    return 0;
}

int main(){
    int N, M;
    scanf("%d %d", &N, &M);

    dp = M;

    vector<int> v, a;

    for(int i = 0 ; i < N; i++){
         v.push_back(i+1);
    }

    dfs(M, v, a);

    return 0;
}




