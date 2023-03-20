#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

int main(){
    int N;
    long long counter = 1, answer = 0;
    std::vector<long long> v;
    scanf("%d",&N);
    while(N/counter != 0){
        counter = counter*10;
    }

    long long counter_c = counter;
    while(counter_c >= 10){
        v.push_back(((N%counter_c)-(N%(counter_c/10)))/(counter_c/10));
        counter_c = counter_c/10;
    }

    std::sort(v.begin(), v.end());

    int i = 0;
    for(int i = 0; i < v.size(); i++){
        answer += v[i]*counter_c;
        counter_c = 10*counter_c;
    }

    printf("%d\n",answer);

    return 0;
}

