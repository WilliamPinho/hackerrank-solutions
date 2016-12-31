#include <iostream>
#include <map>
using namespace std;

int main() {
  map<int,int> remainder;
  int n, k;
  cin >> n >> k;
  int a, count = 0;
  for(int i = 0; i < n; ++i) {
    cin >> a;
    int aModK = a%k;
    if(remainder.count((k-aModK)%k) > 0) {              // x = (k-aModK)%k, so (x+aModK)%k = 0.
      count += remainder[(k-aModK)%k];                  // We add to count all occurrences of x 
    }
    if(remainder.count(aModK) <= 0) {                   // Update the number of occurrences of the remainder of a
      remainder.insert(pair<int,int>(aModK,1));
    } else {
      remainder[aModK]++;                             
    }
  }
  cout << count;
  return 0;
}
