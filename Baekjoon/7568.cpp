#include <iostream>

int main(){
    int N,counter = 1;
    std::cin >> N;
    int dun[N][2];
    for(int i =0 ; i < N; i++){
        std::cin >> dun[i][0] >> dun[i][1];
    }
    for(int i = 0; i < N; i++){
        for(int l =0; l < N; l++){
            if(dun[i][0] < dun[l][0] && dun[i][1] < dun[l][1]){
                counter++;
            }
        }
        std::cout << counter << " ";
        counter = 1;
    }
    return 0;
}
