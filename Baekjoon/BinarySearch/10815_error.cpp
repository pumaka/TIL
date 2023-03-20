#include <cstdio>

// Segmentation fault reason unknown 999999 works but 10000000 & 9999999 does not
int main(){
    int N, M;
    scanf("%d", &N);
    int SG[N]={0};
    int min = 10000001, max = -100000001;
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

    printf("max - min : %d", max-min);

    int rang[max - min +1]={0};
    for(int i : SG ){
        rang[i-min] = 1; 
    }

    for(int i : CD ){
        printf("%d ",rang[i-min]);
    }
    printf("\n");
    
    return 0;
}

