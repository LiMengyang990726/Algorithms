#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int size;
    cin >> size;
    int a[size];
    int neg = 0, pos = 0, zer = 0;
    float nega,posi,zero;
    for(int i = 0 ; i < size; i ++){
        cin >> a[i];
        if(a[i]<0){
            neg++;
        }else if(a[i]>0){
            pos++;
        }else{
            zer++;
        }
    }

    nega = (float)neg/size;
    posi = (float)pos/size;
    zero = (float)zer/size;

    cout << setprecision(6) << posi << endl << nega << endl << zero << endl;
}