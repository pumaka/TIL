#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, x, min = 1000000000;
    std::cin >> N;
    std::vector<int> v, v2;
    for(int i = 0; i < N; i++){
        std::cin >> x;
        if(min >  x){
            min = x;
        }
        v.push_back(x);
    }
       
    for(int i = 2; i < min; i++){
        int cnt = 0;
        for(int l = 1; l < v.size(); l++){
            if(v[l]%i == v[l-1]%i){
                cnt++;
            }
        }
        if((v.size()-1) == cnt){
            v2.push_back(i);
        }
    }

    std::sort(v2.begin(), v2.end());

    for(int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << " " ;
    }
    std::cout << std::endl;

    return 0;
}
