#include <iostream>
#include <string>

using namespace std;

int main() {
    string sbjt, scr;
    float wgt, sm = 0, wgts = 0;
    for(int i =0 ; i < 20 ; i++){
        cin >> sbjt >> wgt >> scr;
        if(scr == "A+"){
            sm+=wgt*4.5;
        }
        else if(scr == "A0"){
            sm+=wgt*4.0;
        }
        else if(scr == "B+"){
            sm+=wgt*3.5;
        }
        else if(scr == "B0"){
            sm += wgt*3.0;
        }
        else if(scr == "C+"){
            sm += wgt*2.5;
        }
        else if(scr == "C0"){
            sm += wgt*2.0;
        }
        else if(scr == "D+"){
            sm += wgt*1.5;
        }
        else if(scr == "D0"){
            sm += wgt*1.0;
        }
        else{
            sm += 0;
        }
        if(scr == "P"){
            wgts-=wgt;
        }
        wgts+= wgt;
    }
    if(wgts==0)wgts =1;
    cout <<sm/wgts;
    
    return 0;
}
