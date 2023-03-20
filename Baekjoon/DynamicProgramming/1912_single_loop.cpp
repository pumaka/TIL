//
// Created by pumak on 3/16/2023.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int sum, inpt;
    scanf("%d", &sum);

    for(int i = 0; i < n-1; i++){
            scanf("%d", &inpt);
            if(inpt > sum){
                sum = inpt;
            }
            else if(sum + inpt >= sum){
                sum += inpt;
            }
            else{

            }
    }


    return 0;
}