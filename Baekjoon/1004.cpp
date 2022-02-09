#include <iostream>
#include <math.h>

using namespace std;

int length(int x1, int y1, int c1, int c2, int r){
  int len = 0;
  len = sqrt(pow(c1-x1,2)+pow(c2-y1,2));
  if(len >= r){
    return 0;
  }
  else {
    return 1;

  }
}

int main(){
  int count = 0;
  int T, N, x1, y1, x2, y2 ,c1, c2, r;
  cin >> T;
  cin >> x1 >> y1 >> x2 >> y2;
  for(int i = 0; i < T; i++){
    cin >> N;
    for(int l = 0; l < N; l++){
      cin >> c1 >> c2 >> r;
      if(length(x1,y1,c1,c2,r) && (length(x2,y2,c1,c2,r) == 0)){
        count += 1;
      }
      else if((length(x1,y1,c1,c2,r) == 0) && length(x2,y2,c1,c2,r)){
        count += 1;
      }
      else {}
    }
    cout << count;
    count = 0;
  }
  return 0;
}
