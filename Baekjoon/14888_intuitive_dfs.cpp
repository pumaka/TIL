#include <stdio.h>
#include <algorithm>

using namespace std;

int a[11], n, c[4];
int r1=-(1<<30), r2=(1<<30);

void dfs(int k, int cur) {
	if(k==n) {
		r1=max(r1,cur);
		r2=min(r2,cur);
		return;
	}
	if(c[0]) {
		c[0]--; dfs(k+1,cur+a[k]); c[0]++;
	}
	if(c[1]) {
		c[1]--; dfs(k+1,cur-a[k]); c[1]++;
	}
	if(c[2]) {
		c[2]--; dfs(k+1,cur*a[k]); c[2]++;
	}
	if(c[3]) {
		c[3]--; dfs(k+1,cur/a[k]); c[3]++;
	}
}


int main() {
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<4;i++)
		scanf("%d",&c[i]);
	dfs(1,a[0]);
	printf("%d\n%d\n",r1,r2);
	return 0;
}
