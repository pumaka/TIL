#include <stdio.h>
#include <string.h>

int cnt = 0;

int recursion(const char *s, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int N;
    char s[1000];
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%1000s", s);
        cnt = 0;
        int a = isPalindrome(s);
        printf("%d %d\n",a, cnt);
    }
}
