#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <iomanip>
#include <fstream>
using namespace std;
typedef pair<int,int> bus;

int main(){
    ifstream inFile;
    inFile.open("A-large-practice.in");
    ofstream outputFile;
    outputFile.open("Practice_1_large.out");

    int t;
    inFile >> t;
    int times;
    for(times = 0; times < t; times++){
        string temp;
        inFile >> temp;

        if(!temp.empty()){
            int n;
            n = stoi(temp);
            bus *thisBus = new bus[n];
            for(int i = 0; i < 2*n; i++){
                int temp;
                inFile >> temp;
                if(i % 2 == 0){
                    thisBus[i/2].first = temp;
                }
                if(i % 2 == 1){
                    thisBus[i/2].second = temp;
                }
            }

            vector<bus> Gbus;
            for(int i = 0; i< n; i++){
                Gbus.push_back(thisBus[i]);
            }
            sort(Gbus.begin(), Gbus.end());

            int interested;
            inFile >> interested;
            int interests[interested];
            int results[interested];
            memset(results, 0, interested*sizeof(results[0]));
            for(int i = 0; i< interested; i++){
                inFile >> interests[i];
                for(int z = 0; z < n; z++){
                    if((interests[i]>=Gbus[z].first)&&(interests[i]<=Gbus[z].second))
                    results[i]++;
                }
            }

            outputFile << "Case #" << (times+1) << ": ";
            for(int i = 0; i < interested; i++){
                outputFile << results[i] << " ";
            }
            outputFile << endl;
        }
    }
    inFile.close(); 
    outputFile.close();
}