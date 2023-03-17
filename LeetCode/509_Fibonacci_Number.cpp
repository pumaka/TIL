//
// Created by pumak on 3/17/2023.
//
#include <cstdio>
#include <iostream>

class Solution {
public:
    int fib(int n) {
        if(n <= 0) return 0;
        if(n == 1) return 1;
        return fib(n-1)+ fib(n-2);
    }
};

int main () {
    Solution obj;
    printf("%d\n", obj.fib(10));
    printf("%d\n", obj.fib(2));
    printf("%d\n", obj.fib(3));
    printf("%d\n", obj.fib(4));
    printf("%d\n", obj.fib(1));
    return 0;
}