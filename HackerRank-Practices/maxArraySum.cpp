#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool comp(int a, int b) { 
    return (a < b); 
} 

int main(){
    int n; 
    cin >> n;
    int input[n];
    for(int i = 0; i < n; i ++){
        cin >> input[i];
    }

    int dp[n];
    dp[0] = max(0, input[0]);
    int result;
    if(n==1){
        result = dp[0];
    }else if (n==2){
        result = max(input[n-1],dp[0]);
    }else{
        dp[1] = max(input[1],dp[0]);
        for(int i = 2; i < n; i++){
            dp[i] = max({dp[i-1],dp[i-2],dp[i-2]+input[i]},comp);
        }
        result = dp[n-1];
    }

    cout << result << endl;
}