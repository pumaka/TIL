#include <cstdio>
#include <map>

int main() {
    int N, M, A;
    scanf("%d", &N);
    std::map<int , int> m;
    for(int i = 0; i < N; i++){
        scanf("%d", &A);
        m[A] = 1;
    }

    scanf("%d", &M);
    for(int i = 0; i < M; i++){
        scanf("%d", &A);
        if(m.find(A) == m.end()){
            printf("0 ");
        }
        else{
            printf("1 ");
        }
    }
    printf("\n");
    return 0;
}
