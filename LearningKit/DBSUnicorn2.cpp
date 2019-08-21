#include <iostream>
using namespace std;
int main(void)
{
    string input;
    cin >> input;

    int count[26];
    memset(count,0,sizeof(count));

    for(int i = 0; i < input.length(); i++){
        count[(input[i]-97)] ++;
    }

    for(int i = 0; i < 26; i ++){
        for(int j = 0; j < count[i]; j++){
            cout<<char(i+97);
        }
    }
}
// #include<iostream>
// #include<string>
// #include <vector>

// using namespace std;
// int main() {

//     string str;
//     cin >> str;
//     vector<char> vchar;

//     for(int i = 0; i < str.length(); i++) {
//         vchar.push_back(str[i]);
//     }

//     sort(vchar.begin(), vchar.end());

//     for (int i = 0; i < vchar.size(); i++) {
//         cout << vchar[i];
//     }

//     cout << endl;
//     return 0;
// }