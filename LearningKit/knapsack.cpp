#include <iostream>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <set>
#include <map>
#include <vector>
#include <cmath>
using namespace std;
typedef pair<int,float> pif;
#define FOR(i,a,b) for(int (i) = (a); i < (b); i++)
bool comp(int a, int b) {
    return (a < b);
}

int main(){
    int t;
    int times;
    cin >> t;
    times = t;
    while(t--){
        int n;
        float c;
        cin >> c >> n;
        int weight[n];
        int value[n];
        FOR(i,0,n){
            cin >> value[i] >> weight[i]; 
        }

        vector<pif> Val;
        Val.push_back = 0;
        int num = 0;
        int chosen[2001];
        memset(chosen,0,sizeof(chosen)*2001);
        FOR(i,1,n){
            if(c-weight[i] >= 0){
                if(Val[i-1][c] < Val[i-1][c-weight[i]]+value[i]]){
                    chosen[num] = i;
                    num++;
                }
                Val[i][c] = max(Val[i-1][c],Val[i-1][c-weight[i]]+value[i]]);
            }
        }

        cout << num << endl;
        FOR(i,0,num){
            cout << chosen[i] << " ";
        }
    }
}