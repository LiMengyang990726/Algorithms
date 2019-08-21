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
    cout << endl << endl;
    int o = 0;
    for (int k = i; k <= j; k++){
        o ^= a[k];
        cout << "a[k]=" << a[k] << ", o=" << o << endl;
    }
    return o;
}
int xor_even(vector<int> a){
    int p = 0;
    int s = 0;
    int n = a.size();
    int max_interval = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-i); j++){
            int temp = xor_sum(a, i, j);
            cout << "temp = " << temp << endl;
            int xor_temp = bin(temp);
            cout << "xor_temp" << xor_temp << endl;
            if(xor_temp % 2 == 0){
                cout << "Before, i=" << i << ", j = " << j << ", xor_temp = " << xor_temp << ", max_interval = " << max_interval << endl;
                max_interval = max(max_interval, j - i + 1);
                cout << "After, i=" << i << ", j = " << j << ", xor_temp = " << xor_temp << ", max_interval = " << max_interval << endl;
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
        iterator_n = n;

        vector<int> a;
        while(iterator_n--){
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