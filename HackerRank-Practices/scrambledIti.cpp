#include <iostream>
#include <algorithm>
#include <fstream>
#include <unordered_map>
#include <string>
#include <set>
#include <iomanip>
#include <map>
#include <vector>
using namespace std;
#define FOR(i,a,b) for(int (i) = (a); i < (b); i++)

int main(){
    ifstream fin;
    fin.open("C-large-practice.in");
    ofstream fout;
    fout.open("Practice3_large.out");

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        int n;
        fin >> n;

        vector<pair <string,string>> tickets;
        map<string,int> departure;
        set<string> arrival;
        string dep,arr;
        FOR(i,0,n){
            fin >> dep >> arr;
            //be careful of the way of pushing elements
            tickets.push_back(pair<string,string> (dep,arr));
            departure.insert(pair<string, int> (dep,i));
            arrival.insert(arr);
        }

        string start;
        for(auto it = departure.begin() ; it != departure.end() ; it++){
            if(arrival.find(it->first) == arrival.end()){
                start = it->first;
            }

        }
        string startArrival = tickets[departure.find(start)->second].second;

        fout << "Case #" << (times-t) << ": ";
        FOR(i,0,n){
            fout << start << "-" << startArrival << " ";
            start = startArrival;

            //this is already the last ticket
            if(arrival.find(start)==arrival.end()){
                break;
            }

            startArrival = tickets[departure.find(start)->second].second;
        }
        fout << endl;
    }

    fin.close();
    fout.close();
}