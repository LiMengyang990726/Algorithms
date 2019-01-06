#include <iostream>
using namespace std;

int main(){
    int M, P, L, E, R, S, N, i;
    while(cin >> M >> P >> L >> E >> R >> S >> N){
        for(i = 0; i < N; i++){
            int temp = M;
            M = P/S;
            P = L/R;
            L = temp*E;
        }
        cout << M << endl;
    }
}