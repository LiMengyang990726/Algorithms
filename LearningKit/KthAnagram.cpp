#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long ull;

int alpha[26] = {0};
string output="";

int factorial(ull x){
    ull result = 1;
    while(x){
        result *= x;
        x --;
    }
    return result;
}

int duplicate(void){
    int result = 1;
    for(int i = 0; i < 26; i++){
        if(alpha[i]>1){
            result *= factorial(alpha[i]);
        }
    }
    return result;
}

char alphaAtPos(ull pos){
    int temp = 0; 
    int i = 0;
    while(i!=26){
        temp += alpha[i];
        if(temp >= (pos+1)){
            break;
        }else{
            i++;
        }
    }
    char result = 65+i;
    alpha[i]--;
    return result;
}

void finalResult(int l,ull k){
    if(l!=0){
        int period = factorial(l)/(l*duplicate());
        if(k != 0){
            ull pos = k/period;
            output += alphaAtPos(pos);

            k = k % period;
            finalResult(l-1,k);
        }else{
            int i; 
            for(i = 0; i < 26; i++){
                while(alpha[i]!=0){
                    char temp = i + 65;
                    output+=temp;
                    alpha[i]--;
                }
            }
        }
    }
}

int main(){
    string input;
    while(true) {
        ull k;
        cin >> input >> k;
        if (input == "#" && k == 0) {
            break;
        }else{
            int l = input.length();
            for(int i = 0; i < l; i++){
                int a = input.at(i)-65;
                alpha[a]++;
            }

            finalResult(l,(k-1));
            cout << output << endl;
        }
        // CLEAR
        input = "";
        output = "";
        for(int i = 0; i < 26; ++i){
            alpha[i] = 0;
        }
    }
}