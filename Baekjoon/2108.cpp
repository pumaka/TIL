#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int arr[N], max = -4001, min = 4001;
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    sort(arr, arr+N);
    ///////////////////////////////
    int average = 0;
    for(int i = 0; i < N; i++) average += arr[i];
    if (average%N == 0){
        average = (average/N);
    }
    if(abs((float)(average/N)-(average/N)) >= 0.5){
        if(average < 0){
            average = (average/N) - 1;
        }
        else{
            average = (average/N) +1;
        }
    }
    else{
        average = average/N;
    }
    printf("%d\n", average);


    ///////////////////////////////
    int median;
    if(N%2 == 0){
        median = (arr[N/2] + arr[(N/2)+1])/2;    
    }
    else{
        median = arr[N/2];
    }
    printf("%d\n", median);


    ////////////////////////////////
    int mode[8002] = {0}, max_c = 0, index;
    for (auto const &i: arr){
        mode[i-min]++;
    }
    
    vector<int> v;
    for(int i = min; i < max+1; i++){
        if(max_c < mode[i-min]){
            max_c = mode[i-min];
        }
    }
    
    for(int i = min; i < max+1; i++){
        if(max_c == mode[i-min]){
            v.push_back(i);
        }
    }
    
    if(v.size() >= 2){
        sort(v.begin(), v.end());
        printf("%d\n",v[1]);
    }
    else{
        printf("%d\n",v[0]);
    }
    //////////////////////////////////////
    printf("%d\n", max - min);
    return 0;
}

