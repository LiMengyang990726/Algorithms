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
    ifstream fin;
    fin.open("B-small-practice.in");
    ofstream fout;
    fout.open("B-small-practice.out");

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        int tot,rtn;
        fin >> tot >> rtn;

        int input[tot];
        long long sum;
        double average;
        double result = 0.0;

        FOR(i,0,tot){
          fin >> input[i];
          sum += input[i];
        }
        average = 1.0*sum/tot;

        if(rtn == 0){
          result = average;
        }else if(rtn == 1){
          FOR(i,0,tot){
            if(input[i] >= average){
              result += 1.0*input[i]/tot;
            }else{
              result += 1.8*average/tot;
            }
          }
        }else{
          double dp[tot];
          dp[0] = average;
          FOR(i,1,tot){
            if(input[i] >= dp[i-1]){
              result += 1.0*dp[i-1]/tot;
            }else{
              result += 1.0*input[i]/tot;
            }
          }
        }
      
        fout << fixed <<std::setprecision(8) <<"Case #"<<(times-t)<<": " <<result << endl;
    }

    fin.close();
    fout.close();
}
