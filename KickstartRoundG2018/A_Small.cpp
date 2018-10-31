#include <iostream>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <string.h>
using namespace std;
// typedef pair<int,int> pii;
#define FOR(i,a,b) for(int (i) = (a); i < (b); i++)

int main(){
    ifstream fin;
    fin.open("A-small-attempt0.in");
    ofstream fout;
    fout.open("A_small.out");

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        int n;
        fin >> n;
        long long int a[n];
        FOR(i,0,n){
            fin >> a[i];
        }

        int result = 0;
        FOR(i,0,n){
            FOR(j,i+1,n){
                FOR(k,j+1,n){
                    long long int ax = a[i];
                    long long int ay = a[j];
                    long long int az = a[k];

                    long long int ayz = ay*az;
                    long long int axz = ax*az;
                    long long int axy = ax*ay;
                    if((ax == ayz)||(ay == axz)||(az == axy)){
                        // cout << "ax: " << ax << " ay: "<< ay << " az: "<<az<<endl;

                        result ++;
                    }
                }
            }
        }
        fout << "Case #"<<(times-t)<<": "<<result<<endl;
    }

    fin.close();
    fout.close();
}