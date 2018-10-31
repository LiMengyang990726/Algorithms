#include<iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int a[size][size];
    for(int i = 0; i < size; i++){
        for(int j = 0 ; j < size; j++){
            cin >> a[i][j];
        }
    }

    int dia1 = 0,dia2 = 0;
    for(int i = 0; i < size; i++){
        dia1 += a[i][i];
        dia2 += a[size-1-i][i];
    }
    cout << abs(dia1-dia2) << endl;
}