#include <stdio.h>
#include <stdlib.h>
#define SIZE 500000

int sorted[SIZE]= {0};
int count = 0;

int merge(int list[], int l, int m, int r, int v){
    int i=l, j=m+1, k=l;
    while(i <= m && j <= r){
        if(list[i] <= list[j]){
            sorted[k++] = list[i++];
            count++;
            if(count == v){
                printf("%d",sorted[k-1]);
                exit(0);
            }
        }
        else{
            sorted[k++] = list[j++];
            count++;
            if(count == v){
                printf("%d",sorted[k-1]);
                exit(0);
            }
        }
    }
    
    // if j reaches r first
    while(i <= m){
        sorted[k++] = list[i++];
        count++;
        if(count == v){
                printf("%d",sorted[k-1]);
                exit(0);
        }
    }
    
    // if i reaches m first
    while(j <= r){
        sorted[k++] = list[j++];
        count++;
        if(count == v){
                printf("%d",sorted[k-1]);;
                exit(0);
        }
    }
    
    for(int s = l; s <= r; s++){
        list[s] = sorted[s];
    }
    return 0;
}

int merge_sort(int* list, int l, int r, int v){
    int m;
    if(l<r){
        m = (l+r)/2;
        merge_sort(list, l, m,v);
        merge_sort(list, m+1, r,v);
        merge(list, l, m, r,v);
    }
}

int main() {
    int N, V;
    scanf("%d %d", &N, &V);
    int* tobsorted = (int*)calloc(N, sizeof(int));
    for(int i = 0; i < N; i++){
        scanf("%d", &tobsorted[i]);
    }
    
    merge_sort(tobsorted, 0, N-1, V);
    
    if(count < V){
        printf("-1");
    }
    free(tobsorted);

    return 0;
}
