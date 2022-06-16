#include <cstdio>


int main(){
    int N, M;
    scanf("%d", &N);
    int SG[N]={0};
    int min = 10000000, max = -100000000;
    // INPUT
    for(int i = 0; i < N; i++){
        scanf("%d", &SG[i]);
    }
    scanf("%d", &M);
    int CD[M]= {0};
    for(int i = 0; i < M; i++){
        scanf("%d", &CD[i]);
        if(CD[i] > max){
            max = CD[i];
        }
        if(CD[i] < min){
            min = CD[i];
        }
    }

    int rang[max - min + 1]={0};
    for(int &i : SG ){
        rang[i-min] = 1; 
    }

    for(int &i : CD ){
        printf("%d ",rang[i-min]);
    }
    printf("\n");
    
    return 0;
}

