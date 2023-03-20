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
    vector<int> v;
    v.push_back(2);
    scanf("%d", &test_case);
    for(int i = 0; i < test_case; i++){
        scanf("%d", &n);
        cnt = 0;
        for(int l:v){
            // think about why this works, because this would actually count both e.g.) input 10 -> 3 7, 7 3 respectively;
            // it was a problem with input.  for instance, 10, 18, 10.
            if(is_prime(n-l)){
                //printf("1: %d %d\n",l,n-l);
                cnt++;
            }
        }
        for(int l = v[v.size()-1]+1; l <= n/2; l++){
            if(is_prime(l)){
                v.push_back(l);
                if(is_prime(n-l)){
                    //printf("2: %d %d\n",l,n-l);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}