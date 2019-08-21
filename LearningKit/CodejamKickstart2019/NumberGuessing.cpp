// #include <bits/stdc++.h>
// using namespace std;
// int guess(int upper, int lower){
//     int m = (lower+1 + upper)/2;
//     cout << m << endl;
//     string result;
//     cin >> result;
//     if(result == "TOO_BIG"){ // better check the string in this way 
//         return guess(m-1,lower);   
//     }else if(result == "TOO_SMALL"){
//         return guess(upper,m+1); 
//     }else if(result == "CORRECT"){
//         return m;
//     }else if(result == "WRONG_ANSWER"){
//         return 0;
//     }
// }

// int main(void){
//     int t;
//     cin >> t;
//     while(t--){
//         int l, u;
//         cin >> l >> u;
//         int result = guess(u,l);
//         cout << result << endl;
//     }
// }
#include <iostream>
#include <string>

int main() {
  int num_test_cases;
  std::cin >> num_test_cases;
  for (int i = 0; i < num_test_cases; ++i) {
    int lo, hi;
    std::cin >> lo >> hi;
    int num_tries;
    std::cin >> num_tries;
    int head = lo + 1, tail = hi;
    while (true) {
      int m = (head + tail) / 2;
      std::cout << m << std::endl;
      std::string s;
      std::cin >> s;
      if (s == "CORRECT") break;
      if (s == "TOO_SMALL")
        head = m + 1;
      else
        tail = m - 1;
    }
  }
  return 0;
}