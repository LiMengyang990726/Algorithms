#Algorithms Learning Journey

---------------
##Things need to be taken care
- The correct procedure:
  - First read through the text description once
  - Then observe the sample carefully
  - Read carefully the instruction and the format of the input once again
  - Observe the data set and estimate the time complexity
  - Use a brute force way if could come up with a good way initially
  - Optimize the algorithm:
    - Think hard about the bottleneck.

      E.g: Search two integer arrays(A and B) to see if they have elements in common

      Brute force: O(A*B)

      Slightly better way: using hash for A and B and then search O(A+B).

    - Reduce the unneccesary parts.

      E.g. List all numbers of a<sup>3</sup>+b<sup>3</sup>=c<sup>3</sup>+d<sup>3</sup> for a,b,c,d in [0,1000]

      Brute force:O(n<sup>4</sup>)

      Slightly better way: manipulate the equation and then solve for the value of d.

    - Reduce the duplicated work.
  - Write the code. Pre-write some fixed stuffs first
------------------------------
##Some conventions
- `define *_CRT_SECURE_NO_DEPRECATE` for ingoring warnings
-  `typedef vector<ii> vii`
- `#define REP(i,a,b) for int i = int (a);i <= int (b);i++`
- Iterator type is a pointer, for pointer to access the `first` or the `second` in a `pair`, should use `->` convention.
-------------------------------
##Template for Code jam Kickstarter

```
#include <iostream>
#include <algorithm>
#include <fstream>
#include <iomanip>
#include <set>
#include <map>
#include <vector>
#include <cmath>
#include <string.h>
using namespace std;
// typedef pair<int,int> pii;
// #define FOR(i,a,b) for(int (i) = (a); i < (b); i++)

int main(){
    ifstream fin;
    fin.open("");
    ofstream fout;
    fout.open(".out");

    int t;
    int times;
    fin >> t;
    times = t;
    while(t--){
        fout << "Case #"<<(times-t)<<": ";
    }

    fin.close();
    fout.close();
}
```
----------------------------
## CPP advanced properties
- :: operator is a scope resolution operator
- -> operator is to dereference the pointer first and then get a specific field of the content

----------------------------
## Common type of errors
- Some features only C++11 has, like `auto`.
Thus should use `g++ -std=c++11 fileName.cpp` to compile
- `Segmented error: 11` means there is an infinite loop.
- When declare an zero array with the size to be decided should declare in this way:
```
int n;
cin >> n;
int a[n];
memset(a,0,sizeof(a[0])*n)
```
------------------------
##Time complexity
- Time limit is usually 3s
- Computer can analyse 10<sup>6</sup>/s
-
| Size       | Time complexity           | Example  |
| ------------- |:-------------:| -----:|
| <= 10      | O(n!), O(n<sup>6</sup>)| Enumerating a permutation |
|<=20     | O()      |   $12 |
| zebra stripes | are neat      |    $1 |

------------------------
##Dynamic Programming
- Some techniques seen from examples:

  Handling initial cases first:

- Common examples:

  Max1DArraySum: a bottom-up approach, which is going to be much faster than the top-down recursive call

  Knapsack:
