#include <bits/stdc++.h>
using namespace std;

int bin(int n) 
{ 
    int count = 0;
    while(n >= 1){
        if(n%2 == 1){
            count ++;
        }
        n = n / 2;
    }
    return count;
} 

int xor_sum(vector<int> a, int i, int j){
    int o = 0;
    for (int k = i; k <= j; k++){
        o ^= a[k];
    }
    return o;
}

int xor_even(vector<int> a){
    int n = a.size();
    int max_interval = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int temp = xor_sum(a, i, j);
            int count = bin(temp);
            if(count % 2 == 0){
                max_interval = max(max_interval, j - i + 1);
            }
        }
    }
    return max_interval;
}

int main() {
    int t, iterator_t;
    cin >> t;
    iterator_t = t;
    while(iterator_t--){
        int n, q, iterator_n;
        cin >> n >> q;

        vector<int> a;
        while(n--){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }

        vector<int> o;
        while(q--){
            int index, modification;
            cin >> index >> modification;
            a[index] = modification;
            o.push_back(xor_even(a));
        }

        cout << "Case #" << (t - iterator_t) << ":";
        for(int i = 0; i < o.size(); i++){
            cout << " " << o[i];
        }
        cout << endl;
    }
}