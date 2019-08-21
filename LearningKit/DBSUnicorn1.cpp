#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(void){

    long k;
    long output = 0;

    // read the inputs
    cin >> k;
    
    for(int i = 1; i < sqrt(k); i++){
        int lastDigit = i%10 ;
        int length = to_string(i).length();

        char temp[]="";
        memset (temp,char(lastDigit),length);
        string str = string(temp);
        cout << "string "<< str << endl;

        int curr = std::stoi(str);
        cout << "int "<< curr << endl;

        if(curr == i){
            output ++;
        }
    }

    // return the output
    cout << output << endl;

    return 0;
}
// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     int K;
//     cin >> K;
//     vector<int> roots;
//     // consider 1 ~ 1000
//     for (int i = 1; i < 10; i++) {
//         roots.push_back(i);
//     }
//     for (int i = 1; i < 10; i++) {
//         roots.push_back(i*11);
//     }
//     for (int i = 1; i < 10; i++) {
//         roots.push_back(i* 111);
//     }
//     int count = 0;

//     for (int i = 0; i < roots.size(); i++) {
//         if (K >= (roots[i] * roots[i])) 
//             count++;
//         else 
//             break;
//     }
//     cout << count << endl;
//     return 0;
// }