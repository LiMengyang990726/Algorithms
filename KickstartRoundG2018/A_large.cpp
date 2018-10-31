#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
typedef unsigned long long ull;

int main() {
    ifstream fin;
    fin.open("A-large.in");
    ofstream fout;
    fout.open("A_large.out");

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        ull A[200001];
        memset(A, 0, sizeof(A[0]) * 200001);

        int N;
        ull num;
        fin >> N;
        for(int i = 0; i <= (N-1); i++){
            fin >> num;
            A[num]++;
        }

        ull result = 0;
        if(A[0] == 2){
            result +=N-A[0];
        }else if(A[0] >= 3){
            result += A[0] * (A[0] - 1) / 2 * (N - A[0]);
            result += (A[0] - 1) * (A[0] - 2) * A[0] / 6;
        }else{

        }
        
        for(int i = 1; i <= 200000; i++){
            int root = sqrt(i);
            if (A[i] == 0)
                continue;
            if (i == 1) {
                if (A[i] < 3)   
                    continue;
                else  
                    result += (A[1] - 1) * (A[1] - 2) * A[1] / 6;    
                continue;
            }
            for(int j = 1; j <= root; j++){
                double d = (double)i / (double)j;
                if (A[j] == 0 || A[(int)d] == 0)
                    continue;

                if (j == 1) {
                    if (A[i] >= 2) {
                        result += A[i] * (A[i] - 1) * A[1] / 2;
                    }
                    continue;
                }
                
                if (abs(d -(int)d) < 0.000001) {
                    if (j == root && d == root && j * d == i) {
                        if (A[root] >= 2) {
                            result += A[i] * A[root] * (A[root] - 1) / 2;
                        }
                    }
                    else {
                        result += A[i] * A[j] * A[(int)d];
                    }
                }
            }
        }
        fout << "Case #"<<(times-t)<<": "<<result <<endl;
    }
}