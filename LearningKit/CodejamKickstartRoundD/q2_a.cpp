#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.second < j.second;
}

int main(){
    int t;
    int iterator_t;
    cin >> t;
    iterator_t = t;
    while(iterator_t--){
        int n, g, m;
        int iterator_g = g;
        cin >> n >> g >> m;

        vector<vector<pair<int, int> > > record[n];
        while(g--){
            int start;
            string direction;
            cin >> start >> direction;
            if(direction=="C"){
                pair <int, int> temp ; 
                temp.first = iterator_g-g; 
                temp.second = 0; 
                record[start-1].push_back(temp); // guest i, at minute 0, is at consulate start
                for(int k = 1 ; k <= m ; k ++){
                    if((start + k) > n){
                        start = 1;
                    }else{
                        start = start + 1;
                    }
                    record[start-1].push_back(make_pair(iterator_g-g, k));
                }
            }else{
                record[start-1].push_back(make_pair(iterator_g-g, 0));
                for(int k = 1 ; k <= m; k ++){
                    if((start - k) < 1){
                        start = n;
                    }else{
                        start = start - 1;
                    }
                    record[start-1].push_back(make_pair(iterator_g-g, k));
                }
            }
        }

        int o[g] = {0};
        for(int k_i = 0; k_i < n; k_i++){
            vector<pair<int, int> > curr = record[k_i];
            sort(curr.begin(), curr.end(), compare);
            int max = curr[0].second;

            vector<pair<int, int> > rec;
            for(int k_j = 0; k_j < curr.size(); k_j++){
                if(curr[k_j].second == max){
                    o[curr[k_j].first] ++;
                    rec.push_back(curr[k_j]);
                }
            }
        }

        cout << "Case #" << (t - iterator_t) << ":";
        for(int k = 0 ; k < g; k++){
            cout << " " << o[k] << endl;
        }
    }
}