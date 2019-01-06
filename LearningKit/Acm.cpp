#include <iostream>
using namespace std;

int main(){
    int a;
    char b;
    char result[6];

    int wronged[27] = {0};
    int noRight = 0;
    int time = 0;
    int multiplier = 0;

    scanf("%d %c %5s",&a, &b,result);
    if(a!=-1){
        if(result[0]=='r'){
            noRight += 1;
            time += a;
            multiplier += wronged[b-65];
        }else{
            wronged[b-65] += 1;
        }
        scanf("%d",&a);
        while(a!=-1){
            scanf(" %c %5s", &b,result);
            if(result[0]=='r'){
                noRight += 1;
                time += a;
                multiplier += wronged[b-65];
            }else{
                wronged[b-65] += 1;
            }
            scanf("%d",&a);
        }
    }
    int totalTime = time + 20*multiplier;
    cout << noRight << " " << totalTime << endl;
}