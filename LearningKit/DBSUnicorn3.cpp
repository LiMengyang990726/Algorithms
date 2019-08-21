#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    string input;
    cin >> input;

    for(int i = 0; i < input.length(); i++){
        cout<<input[input.length()-i-1];
    }
}