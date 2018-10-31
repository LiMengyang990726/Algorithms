#include <iostream>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <set>
#include <map>
#include <vector>
#include <cmath>
using namespace std;
// typedef pair<int,int> pii;
#define FOR(i,a,b) for(int (i) = (a); i < (b); i++)

int main(){

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        int n;
        cin >> n;
        int input[n];
        input[0] = 0;
        FOR(i,1,n){
            cin >> input[n];
        }

        int dp[n];
        dp[0] = 0;
        start 
        FOR(i,1,n){
            dp[i] = max(dp[i-1],dp[i-1]+input[i]);
            if(dp[i]<0){
                dp[i] = 0
            }
        }
        fout << "Case #"<<(times-t)<<": ";
    }

    fin.close();
    fout.close();
}