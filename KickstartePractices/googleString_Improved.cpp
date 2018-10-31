#include <iostream>
#include <algorithm>
#include <fstream>
#include <math.h>
using namespace std;
typedef unsigned long long ull;

int recurFind(ull pos,int strno, bool nidSwitch){
    ull mid = ull(pow(2,strno)/2);
    // cout << "mid is: "<< mid <<endl;
    if(pos == mid){
        if(!nidSwitch){
            return 0;
        }else{
            return 1;
        }
    }
    if(pos > mid){
        if(!nidSwitch){
            return recurFind(2*mid-pos,strno-1,true);
        }else{
            return recurFind(2*mid-pos,strno-1,false);
        }
    }
    if(pos < mid){
        if(!nidSwitch){
            return recurFind(pos,strno-1,false);
        }else{
            return recurFind(pos,strno-1,true);
        }
    }
    return -1;
}
int main(){
    ifstream fin;
    fin.open("B-large-practice.in");
    ofstream fout;
    fout.open("Practice2_large.txt");

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        ull n;
        fin >> n;
        int strno;
        strno = int(log2(n+1)+1);
    
        int result;
        result = recurFind(n,strno,false);
        fout << "Case #"<<(times-t)<<": "<<result<<endl;
    }

    fin.close();
    fout.close();
}