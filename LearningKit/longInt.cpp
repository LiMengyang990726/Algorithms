#include<iostream>
using namespace std;
typedef long long ll;

int main(){
    int size;
    cin >> size;
    ll a[size];
    ll result = 0;
    
    int c;
    for(c = 0; c < size; c++){
        cin >> a[c];
        result += a[c];
    }

    cout << result << endl;
}