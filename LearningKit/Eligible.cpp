#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    while(N--){
        string name;
        int sYr, sMt, sDt, bYr, bMt, bDt, crs;
        scanf("%s %d/%d/%d %d/%d/%d %crs",&name, &sYr,&sMt,&sDt,&bYr,&bMt,&bDt,&crs);
        if((sYr>=2010)||(bYr>=1991)){
            printf("%s eligible\n",name);
        }else if(crs>=41){
            printf("%s ineligible\n",name);
        }else{
            printf("%s coach petitions\n",name);
        }
    }
}