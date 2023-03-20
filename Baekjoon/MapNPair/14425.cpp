#include <cstdio>
#include <map>
#include <string>
#include <iostream>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    std::map<std::string, int> m;
    std::string s[M];
    std::string inpt;
    for(int i = 0; i < N; i++){
        std::cin >> inpt;
        m[inpt] = 1;
    }
    
    int found = 0;
    for(int i = 0; i < M; i++){
        std::cin >> inpt;
        if(m.find(inpt) != m.end()){
            found+= 1;
        }
    }

    printf("%d\n", found);

    return 0;
} 

