#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N--){
        char str[35];
        int sYr, sMt, sDt, bYr, bMt, bDt, crs;
        scanf("%30s %d/%d/%d %d/%d/%d %d",str, &sYr,&sMt,&sDt,&bYr,&bMt,&bDt,&crs);
        if((sYr>=2010)||(bYr>=1991)){
            printf("%s eligible\n",str);
        }else if(crs>=41){
            printf("%s ineligible\n",str);
        }else{
            printf("%s coach petitions\n",str);
        }
    }
}