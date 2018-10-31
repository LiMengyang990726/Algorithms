#include <iostream>
using namespace std;

int main(){
    int arr[6][6];
    for(int i = 0; i < 6; i++){
        for(int j = 0 ; j < 6; j ++){
            cin >> arr[i][j];
        }
    }

    int hourglass[4][4] = {0};
    for(int i = 0; i < 4; i++){
        for(int j = 0 ; j < 4; j++){
            hourglass[i][j] = arr[i][j]+arr[i][j+1]+arr[i][j+2]
                            +arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]
                            +arr[i+1][j+1];
        }
    }

    int max = -100;
    int px,py;
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0; j< 4; j++){
            if(hourglass[i][j]>max){
                max = hourglass[i][j];
                px = i;
                py = j;
            }
        }
    }

    cout << max << endl;
    // cout << arr[px][py] << " " << arr[px][py+1] << " " << arr[px][py+2] << endl;
    // cout << "  " << arr[px+1][py+1] << "  " << endl;
    // cout << arr[px+2][py] << " " << arr[px+2][py+1] << " " << arr[px+2][py+2] << endl;
}