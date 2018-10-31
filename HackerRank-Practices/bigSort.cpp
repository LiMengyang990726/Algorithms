#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// compare the size of the string first, which will save some time and computational power
bool comp(const string &left, const string &right)
{
    if (left.size() == right.size())
        return left < right;
 
    else
        return left.size() < right.size();
}

void SortingBigIntegers(string arr[], int n)
{
    vector<string> sortArr(arr, arr + n);

    // 5 ways of initializing the vector
    // vector<int> vect;  
    // vect.push_back(10); 
    // vect.push_back(20); 
    // vect.push_back(30);

    // vector<int> vect(n, 10); //size n, with all values are 10

    // vector<int> vect{ 10, 20, 30 };

    // int arr[] = { 10, 20, 30 }; 
    // int n = sizeof(arr) / sizeof(arr[0]); 
    // vector<int> vect(arr, arr + n); 

    // vector<int> vect1{ 10, 20, 30 }; 
    // vector<int> vect2(vect1.begin(), vect1.end()); 

    sort(sortArr.begin(), sortArr.end(), comp);
    for (int i = 0; i < n; i++) {
        cout << sortArr[i] << endl;
    }
}

int main(){
    int size = 0;
    cin >> size;
    string A[size];
    for(int i = 0; i < size; i++){
        cin >> A[i];
    }
    SortingBigIntegers(A,size);
}