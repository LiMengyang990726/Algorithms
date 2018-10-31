#include <iostream>
#include <algorithm>
#define FOR(i, a, b) for(int (i) = (a); (i) < (b); (i)++)
using namespace std;

int main(){
    int t;
    cin >> t;
    int requiredOut[t];
    FOR(i,0,t){
        cin >> requiredOut[i];
    }
    int largest = requiredOut[t-1];

    string out="";
    FOR(i,1,t){
        out.append("0");

        int length = 2*i-1;
        string xor(length,'1');
        string switched;
        string outN_1 = out;
        outN_1=reverse(out.begin(),out.end());
        FOR(j,0,length-1){
            string temp;
            temp = ((str1[i]-'0') ^ (str2[i]-'0'))+'0';
            switched.append(temp);
        }

        out.append(reverse(switched.begin(),switched.end()));
    }

    FOR(i,0,t){
        cout<<"Case #"<<(i+1)<<": "<<out.at(requiredOut[i]-1);
    }
} 