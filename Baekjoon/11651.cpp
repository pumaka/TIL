#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    // Variables
	int N,x,y;
	vector<pair<int,int>> v;
	
    // Input Method 
	scanf("%d", &N);
	for(int i=0;i<N;i++)
	{	
		scanf("%d %d",&x, &y);
		v.push_back({y,x});
	}
    
	sort(v.begin(),v.end());
    
	for(int i=0;i<N;i++)
	{
		printf("%d %d\n", v[i].second, v[i].first);
	}

	return 0;
}
