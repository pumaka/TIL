#include <iostream>
#include <string>

using namespace std;

int main(){
    string s[8] = {"c=", "c-" ,"dz=","d-","lj","nj","s=","z="};
    string input;
    int counter = 0;
    cin >> input;
    for(int i = 0; i < input.size(); i++){
        cout << "Loop: " << i+1 << "\n";
        for(int l = 0; l < 8; l++){
            cout << "Length: " << s[l].length()<< "\n";
            cout << input.compare(i,s[l].length(),s[l]) << "\n";
            if(!input.compare(i,s[l].length(),s[l])) {
              if(s[l].length() == 3){
                i += 1;
              }
              counter += s[l].size()-1;
              break;
            }
            else{
              continue;
            }
        }
    }
    cout << "Counter: " << counter << "\n";
    cout << input.size() - counter;
    return 0;
}
