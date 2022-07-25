#include <cstdio>
#include <map>
#include <string>
#include <iostream>

using namespace std;

bool check(string v){
    if(isdigit(v[0])== true)
        return true;
        return false;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    char inpu[21];
    string poke[x];
    map<string, int> m;
    for(int i =0 ; i < x; i++){
        scanf("%s", inpu);
        poke[i] = inpu;
        m.insert({inpu, i});
    }
    
    for(int i = 0; i < y; i++){
        scanf("%s", inpu);
        if(check(inpu)){
            printf("%s\n", poke[stoi(inpu)-1].c_str());
        }
        else{
            printf("%d\n",m[inpu]+1);
        }
    }
    
    return 0;
}
