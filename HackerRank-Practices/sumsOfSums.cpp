#include <iostream>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <set>
#include <map>
#include <vector>
using namespace std;
#define FOR(i,a,b) for(int (i) = (a); (i) <= (b); (i)++)

int findSum(int[] a, int start, int end){
    int result = 0;
    for(int i = start; i <= end; i++){
        result += a[i];
    }
    return result;
}
int main(){
    ifstream fin;
    fin.open("");
    ofstream fout;
    fout.open(".out");

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        int n, q;
        fin >> n >> q;
        int initial[n];
        FOR(i,0,n){
            fin >> initial[i];
        }

        // vector<int> finalArray[(n*(n+1)/2)];
        vector<int> finalArray;
        FOR(length,0,n){
            FOR(i,0,(n-length)){
                int start = i;
                int end = i+length;
                int result = findSum(initial, start,end);
                finalArray.push_back(result);
            }
        }

        cout << "Case #"<<(times-t)<<": ";
        FOR(i,0,q){
            int start;
            int end;
            fin >> start >> end;
            fout << findSum(finalArray,start,end);
        }
        
    }

    fin.close();
    fout.close();
}