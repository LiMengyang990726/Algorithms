#include<iostream>
#define FOR(i,a,b) for((i)=(a);(i)<=(b);i++)
using namespace std;
typedef long long ll;
int compare(int base[], int other[]){
    long long i;
    int result = 0;
    FOR(i,0,2){
        if(base[i]>other[i]){
            result ++;
        }
    }
    return result;
}

int main(){
    int a[3];
    int b[3];
    int aout,bout;
    int i;
    FOR(i,0,2){
        cin >> a[i];
    }
    FOR(i,0,2){
        cin >> b[i];
    }
    aout = compare(a,b);
    bout = compare(b,a);
    cout << aout << " " << bout << endl;
}