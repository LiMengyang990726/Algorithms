// #include <bits/stdc++.h>
#include <iostream>
#include <limits>
#include <cstring>
#include <math.h>
using namespace std;
typedef unsigned long long int ull;

int main(){
  ull N;
  cin >> N;
  int largest = 0;
  ull pos;
  ull upper;

  // cout << upper << endl;
  for(ull i = 2; i <= sqrt(N); i++){

    ull num = 0;
    ull temp = N;

    while(temp % i == 0){
      num++;
      temp = temp/i;
    }
    if (num > largest){
      largest = num;
      pos = i;
    }
  }

  if(largest == 0){
    pos = N;
  }
  cout << pos << endl;
}
