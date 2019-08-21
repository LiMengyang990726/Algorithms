#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n = 2;
    float epsilon = 1e-5;
    for(n = 2; n <= 100000; n ++){
        float nsqrt = sqrt(n);
        if(nsqrt >= 2){
            bool flag = false;
            int i = 2;
            while((i <= int(nsqrt)) && !flag){
                float divider = float(n) / float((i*i));
                int intdivider = int(divider);
                if((divider - int(divider) <= epsilon) && !flag){
                    flag = true;
                }
                i++;
            }
            if(!flag){
                cout << n << endl;
            }
        }else{
            cout << n << endl;
        }
    }
}