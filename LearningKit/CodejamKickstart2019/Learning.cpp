#include <bits/stdc++.h>
using namespace std;

// This is how to define a function
float Fibonnaci(int n){
    float numerator = float(pow((1 + pow(5, 0.5)), n) + pow((1 - pow(5, 0.5)), n));
    float denominator = float(pow(5, 0.5) * pow(2, n));
    return float(numerator / denominator);
}

// This is how to define an entity
struct P {
    int x, y;
    bool operator<(const P &p) {
        if (x != p.x) return x < p.x;
        else return y < p.y;
    }
};

int main() {
    // calculate Fibonaaci
    // int n;
    // cin >> n;
    // while(n--){
    //     cout << Fibonnaci(n) << endl;
    // }

    // Find the maximum sum in a subarray
    // int arr[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    // int p = 0;
    // int s = 0;
    // cout << sizeof(arr) << endl;
    // for (int i = 0; i < sizeof(arr) ; i++){
    //     s = max(arr[i], s+arr[i]);
    //     p = max(p, s);
    //     cout << "round " << i << ", element " << arr[i] << ", s is " << s << ", p is " << p << endl;
    // }
    // cout << p << endl;;

    // Sorting 
    // sort(v.begin(), v.end(0), can_self_define)

    // Searching
    // int input[] = {1,2,2,3,4,4,5,6,7,8,10,45};
    // vector<int> v(input, input+12);
    
    // vector<int>::iterator it1 , it2;
    
    // it1 = lower_bound(v.begin(), v.end(), 4); 
    // cout << it1 - v.begin() << endl;

    // it2 = upper_bound(v.begin(), v.end(), 4);
    // cout << it2 - v.begin() << endl;

    // Data Structure - Dynamic Array
    // Data Strcutre - set
    // Data Structure - map
    // map<string, int> m;
    // m["hey"] = 1;
    // m["hi"] = 2;
    // m["yo"] = 3;
    // for(iterator x = m.begin(); x != m.end(); x++){
    //     cout << x.first << " " << x.second << endl;
    // }
    // Data Structure - Priority queue
    // priority_queue<int,vector<int>,greater<int> > q;

    // Generate Subset - Method 2: using bit representation
    vector<int> input;
    input.push_back(3);
    input.push_back(7);
    input.push_back(2);
    for(std::vector<char>::const_iterator i = input.begin(); i != input.end(); ++i){
        cout << *i << endl;
    }
    int n = input.size(); // (1 << n) represents 2^n, which is the number of combinations
    
    vector<vector<int> > result;
    for (int b = 0; b < (1 << n) ; b++){
        cout << endl;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            // cout << "i=" << i << ", (1<<i)=" << (1<<i) << endl;
            if (b&(1<<i)) {
                // cout << "b=" << b << ", (1<<i)=" << (1<<i) << endl;
                // cout << "Here is executed" << endl;
                v.push_back(input[i]);
                cout << input[i] << endl;
            }
        }
        result.push_back(v);
    }
}
