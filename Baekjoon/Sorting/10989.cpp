#include <cstdio>
using namespace std;

int num[10001];

int main()
{

    int n; 
    scanf("%d", &n);

    int temp = 0;   
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        num[temp]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (num[i]) {
            printf("%d\n", i);
            num[i]--;
        }
    }
    return 0;
}