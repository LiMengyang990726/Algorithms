#include <iostream>
using namespace std;

int main(){
    int n, denominator;
    cin >> n;
    denominator = n;
    int a[n],i;
    int sum = 0;
    for(i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] != -1){
            sum += a[i];
        }else{
            denominator -= 1;
        }
    }
    float result = (1.0*sum)/denominator;
    cout << result;
}