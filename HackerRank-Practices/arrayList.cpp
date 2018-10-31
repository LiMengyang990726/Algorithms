#include <iostream>
using namespace std;

// class arrayList{
//     public:
//     int index;
//     string element;


//     string get(int index){
//         if(index < 0 || index > currentSize){
//             throw n
//         }
//     }
// }
int main(){
    int size;
    cin >> size ;
    int rotation;
    cin >> rotation;
    int a[size];
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }

    if(rotation < size){
        for(int i = rotation; i < size ; i++){
            cout << a[i] << " ";
        }
        for(int i = 0; i < rotation; i ++){
            cout << a[i] << " ";
        }
    }else{
        for(int i = 0 ; i < size; i ++){
            cout << a[i] << " ";
        }
    }
    
}
