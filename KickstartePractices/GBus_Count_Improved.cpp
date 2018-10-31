#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
#define REP(i,a,b) for (int (i) = (a); (i) < (b); (i)++)

int main(){
    ifstream fin;
    fin.open("A-large-practice.in");
    ofstream fout;
    fout.open("Practice_1_large.out");

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        string temp;
        fin >> temp;
        if(!temp.empty()){
            int a[5001] = {0};
            int n = stoi(temp);
            REP(i,0,(2*n)){
                int temp2;
                fin >> temp2;
                if(i%2==0){
                    a[temp2]++;
                }else{
                    if(temp2+1<5001){
                        a[temp2+1]--;
                    }
                }
            }

            REP(i,1,5002){
                a[i] = a[i]+a[i-1];
            }

            int n2;
            fin >> n2;
            int n2bus[n2];
            REP(i,0,n2){
                fin >> n2bus[i];
            }

            fout << "Case #" << (times-t) << ": ";
            REP(i,0,n2){
                fout << a[n2bus[i]-1] << " ";
            }
            fout << endl;
        }
    }
    fin.close();
    fout.close();
}