#include <cstdio>
#include <algorithm>


int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    std::sort(arr, arr+n);

    int sum = 0;
    for(int i = 0 ; i < n; i++){
        sum += arr[i]*(n-i);
    }

    printf("%d", sum);
    return 0;
}