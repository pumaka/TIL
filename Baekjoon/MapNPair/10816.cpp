#include <cstdio>
#include <hash_map>

using namespace std;

int main() {
    int x, y;
    scanf("%d", &x);
    int integer[x];
    for(int i =0; i < x; i++){
        scanf("%d",&integer[i]);
    }
    scanf("%d", &y);
    int sangeun[y];
    __gnu_cxx::hash_map<int, int> m;
    for(int i =0; i < y; i++){
        scanf("%d",&sangeun[i]);
        m.insert(__gnu_cxx::hash_map<int, int>::value_type(sangeun[i], 0));
    }
    
    for(int i = 0; i < x; i++){
        m[integer[i]]++;
    }
    
    for(int i =0; i < y; i++){
        printf("%d ",m[sangeun[i]]);
    }
    
    return 0;
}
