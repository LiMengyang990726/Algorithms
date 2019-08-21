#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    int N, G, M;
    for (int t = 1; t <= T; t++) {
        cin >> N >> G >> M;
        vector< pair<int, char> > data;
        for (int i = 0; i < G; i++) {
            int H;
            char dir;
            cin >> H;
            getchar();
            cin >> dir;
            data.push_back(make_pair(H, dir));   
        }

        // for (int i = 0; i < G; i++) {
        //     cout << data[i].first << " " << data[i].second << endl;
        // }

        // consider the M is 0;
        
        if (M == 0) {
            vector<int> result;
            for (int j = 0; j < G; j++) {
                result.push_back(1);
            }
            cout << "Case #" << t << ":";
            for (int j = 0; j < G; j++) {
                cout << " " << result[j]; 
            }
            cout << endl;
            continue;
        }

        vector< vector<int> > rems;
        vector<int> rem;
        vector<bool> updated;
        for (int i = 0; i < N; i++) {
            rems.push_back(rem);
            updated.push_back(false);
        }
        for (int j = 0; j < G; j++) {
            // rember initially
            rems[data[j].first-1].push_back(j);
        }
        for (int i = 0; i < M; i++) {
            int cur_pos;
            for (int j = 0; j < G; j++) {
                if (data[j].second == 'C') {
                    cur_pos = ((data[j].first + 1 > N) ? data[j].first + 1 - N : data[j].first + 1);
                } else {
                    cur_pos = ((data[j].first - 1 < 1) ? data[j].first - 1 + N : data[j].first - 1);
                }
                if (updated[cur_pos-1] == false) {
                    rems[cur_pos-1].clear();
                    updated[cur_pos-1] = true;
                }
                // remember this guest
                rems[cur_pos-1].push_back(j);
                data[j].first = cur_pos;
            }
            for (int k = 0; k < N; k++) {
                updated[k] = false;
            }
        }

        vector< vector<int> > results;
        vector<int> result;
        for (int g = 0; g < G; g++) {
            result.clear();
            results.push_back(result);
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < rems[i].size(); j++) {
                results[rems[i][j]].push_back(i);
            }
        }

        cout << "Case #" << t << ":";
        for (int g = 0; g < G; g++) {
            cout << " " << results[g].size(); 
        }
        cout << endl;

    }

    return 0;
}