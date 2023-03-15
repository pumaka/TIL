#include <cstdio>
#include <chrono>
#include <iostream>
#include <cmath>

using namespace std;
using namespace std::chrono;

double comb(double n, double k){
    if (k == 1) return (n/k);
    return (n/k)*comb(n-1, k-1);
}

long long int comb_pas(int n, int k){
    // this is way much better why?
    if(k == 0) return 1;
    if(n == k) return 1;
    if(k == 1) return n;
    if(n-1 == k) return n;
    return comb_pas(n-1,k-1)+comb_pas(n-1,k);
}

int main(){
    int n;
    scanf("%d", &n);
    /*
    // #1 plain old recursion
    //--------------// time measure //------------------------//
    auto start = high_resolution_clock::now();
    /////////////////// my process ////////////////////////////
    long long int sum = 0;
    for(int i = 1; i  <= n/2; i++) {
        //printf("%d C %d\n", n-i, i);
        sum += floor(comb((double) n - i, (double) i) + 0.5);
    }
    sum++; // all 1s compensation
    printf("sum#1 : %lld\n", sum%15746);
    ///////////////////////////////////////////////////////////
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << "us" << endl;
    //-------------------------------------------------------//



    // # 2 pascal's triangle recursion
    //--------------// time measure //------------------------//
    start = high_resolution_clock::now();
    /////////////////// my process ////////////////////////////
    sum = 0;
    for(int i = 1; i  <= n/2; i++) {
        //printf("%d C %d\n", n-i, i);
        sum += comb_pas(n - i, i);
    }
    sum++;
    printf("sum#2: %lld\n", sum%15746);
    ///////////////////////////////////////////////////////////
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << "us" << endl;
    //-------------------------------------------------------//
*/
    // # 3 pascal's triangle with list
    //--------------// time measure //------------------------//
    auto start = high_resolution_clock::now();
    /////////////////// my process ////////////////////////////
    int pascal[1000001];
    pascal[0] = 1;
    pascal[1] = 1;
    for(int i = 2; i  <= n; i++) {
        pascal[i] = (pascal[i-1] + pascal[i-2])%15746;
    }
    printf("sum#3: %d\n", pascal[n]%15746);
    ///////////////////////////////////////////////////////////
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << "us" << endl;
    //-------------------------------------------------------//


    return 0;
}