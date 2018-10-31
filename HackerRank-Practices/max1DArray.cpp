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
bool comp(int a, int b) {
    return (a < b);
}

int main(){

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        int n;
        cin >> n;
        int input[n];
        FOR(i,0,n){
          cin >> input[i];
        }

        int dp[n];
        dp[0] = input[0];
        FOR(i,1,n){
          dp[i] = max(dp[i-1],dp[i-1]+input[i]);
        }

        fout << "Case #"<<(times-t)<<": " << dp[n-1];
    }
}
