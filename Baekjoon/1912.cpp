//LESSON
// Variable size cannot be initialized in c++

#include <cstdio>
#include <iostream>
#include <chrono>

using namespace std::chrono;

long long int mx = -100000000;

/*
// method 1
int find_max(int n, int k, int lis[]){
    // n : length of the list
    // k : how long will be the segmentation
    // lis : list
    int sum = 0;
    for(int i = 0; i <= n-k; i++){
        for(int l = i; l<i+k; l++){
            sum += lis[l];
        }
        if(mx <= sum) {
            mx = sum;
        }
        sum = 0;
    }
    if(n == k) return 0;
    return find_max(n, k+1, lis);
}
 */
int find_max(int n, int k, int tmp[], int lis[]){
    if (n <= k) return 0;
    for(int i = k; i < n; i++){
        tmp[i-k] += lis[i];
        if(tmp[i-k] > mx) mx = tmp[i-k];
    }
    return find_max(n, k+1,tmp, lis);
}


int main() {
    int n;
    std::cin >> n;
    int lis[n], tmp[n-1];
    auto start = high_resolution_clock::now();
    for(int i = 0; i < n; i++){
        scanf("%d",&lis[i]);
        tmp[i] = 0;
    }

    find_max(n, 0, tmp, lis);
    printf("%lld\n", mx);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << duration.count()/1000 << "us" << std::endl;
    return 0;
}