#include <iostream>
using namespace std;

int main(){
    int n;
    int counter = 1;
    while(cin >> n){
        int a,i;
        int max = (-1)*1000001;
        int min = 1000001;
        
        while(n--){
            cin >> a;
            if(a >= max){
                max = a;
            }
            if(a <= min){
                min = a;
            }
        }

        cout << "Case " << counter << ": " << min << " " << max << " " << (max - min) << endl;
        counter ++;
    }
}