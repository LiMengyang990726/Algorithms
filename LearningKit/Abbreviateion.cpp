#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string in;
        string match;
        cin >> in;
        cin >> match;
        int lenI;
        int lenM;
        lenI = in.length();
        lenM = match.length();

        string dp = "";
        int pos = 0;
        for(int i = 0 ; i < len; i++){
            if(in.at(i) == match.at(pos) || (toupper(in.at(i)) == match.at(pos))){
                if(pos==match.length()-1){
                    continue;
                }
                pos++;
            }else{

            }
        }

        if(pos == match.length()-1){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
}
