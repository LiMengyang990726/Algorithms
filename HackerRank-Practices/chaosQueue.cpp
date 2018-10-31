#include <iostream>
using namespace std;

int bubblesort(int a[], int bride[], int size){
    int steps = 0;
    for(int i = 0 ; i < size ; i ++){
        for(int j = 0 ; j < (size-i-1); j++){
            if(a[j]>a[j+1]){
                bride[a[j] - 1] ++;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                steps ++;
            }
        }
    }
    return steps;
}

int main(){
    int times;
    cin >> times;
    int steps[times];
    int i = 0;

    while(i < times){
        int size;
        cin >> size;
        int input[size];
        for(int i = 0 ; i < size ; i ++){
            cin >> input[i];
        }
        int bride[5] = {0};

        steps[i] = bubblesort(input,bride,size);

        for(int j = 0; j < size; j++){
            // cout << bride[j] ;
            if(bride[j] > 2){
                steps[i] = -1;
            }
        }
        i++;
    }

    for(int k = 0; k < times; k++){
        if(steps[k]==-1){
            cout << "Too chaotic" << endl;
        }else{
            cout << steps[k] << endl;
        }
    }
}