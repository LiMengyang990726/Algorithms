#include <iostream>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <string.h>
#include <functional> 
using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
#define FOR(i,a,b) for(int (i) = (a); i < (b); i++)
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}

int main(){
    ifstream fin;
    fin.open("B-small-attempt0.in");
    ofstream fout;
    fout.open("B_small.out");

    int t;
    int times;
    cin >> t;
    times = t;
    while(t--){
        int N,Q;
        fin >> N >> Q;

        ll A1, B1, C1, M1;
        ll  A2, B2, C2, M2;
        ll Z1, Z2, A3, B3, C3, M3;
        ll X[N];
        ll Y[N];
        ll L[N];
        ll R[N];
        ll K;
        vector<ll> range;

        cin >> X[0] >> X[1] >> A1 >> B1 >> C1 >> M1;
        cin >> Y[0] >> Y[1] >> A2 >> B2 >> C2 >> M2;
        cin >> Z1 >> Z2 >> A3 >> B3 >> C3 >> M3;
        L[0] = min(X[0],Y[0])+1;
        L[1] = min(X[1],Y[1])+1;
        R[0] = max(X[0],Y[0])+1;
        R[1] = max(X[1],Y[1])+1;
        K = Z1 + 1;

        FOR(i,2,N){
            X[i] = (A1 * X[i - 1] + B1 * X[i - 2] + C1) % M1;
            Y[i] = (A2 * Y[i - 1] + B2 * Y[i - 2] + C2) % M2;
            L[i] = min(X[i],Y[i])+1;
            R[i] = max(X[i],Y[i])+1;
            range.push_back(ll(L[i],R[i]));
        }

        sort(range.begin(), range.end(), sortbysec);
        ll result;
        ll i;
        // ll temp = K-range[largest-1];
        for(auto it = range.end(); it != range.begin(); it--){
            if((it->second)-(it->first)>=K){
                result = (it->second)-K+1;
            }else{
                K
            }
        }

        // ll largest = R[N-1];
        // ll range[largest+2];
        // memset(range,0,sizeof(range));
       
        // FOR(i,0,N){
        //     range[L[i]]++;
        //     range[R[i]+1]--;
        // }
        // FOR(i,1,largest){
        //     range[i] += range[i-1];
        // }
        
        ll result;
        ll i;
        ll temp = K-range[largest-1];
        for(i = (largest-2); i > 0; i--){
            temp -= range[i];
            if(temp<=0){
                break;
            }
        }
        result = i;
        fout << "Case #"<<(times-t) << ": "<<result <<endl;
        cout << "result "<< result <<endl;
    }
    fin.close();
    fout.close();
    
}