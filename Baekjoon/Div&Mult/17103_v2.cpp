#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

bool is_prime(unsigned int n){
    bool is_p = true;
    if (n == 0 || n == 1) is_p = false; // redundant, but for the sake of logical integrity
    for (unsigned int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            is_p = false;
            break;
        }
    }
    return is_p;
}


int main(){
    int test_case, n, cnt;
    scanf("%d", &test_case);
    vector<int> v;
    for(int i = 2; i<= 1000000000; i++){
        if(is_prime(i)) v.push_back(i);
    }

    for(int i = 0; i < test_case; i++){
        scanf("%d", &n);
        cnt = 0;
        for(const int l: v){
            for(const int s: v){
                if(l+s == n){
                    cnt++;
                    break;
                }
                if(s > n) break;
            }
            if(l > n) break;
        }
        printf("%d\n", cnt/2);
    }
    return 0;
}