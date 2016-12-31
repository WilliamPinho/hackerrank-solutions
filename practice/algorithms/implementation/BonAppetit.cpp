#include <iostream>
using namespace std;

int main() {
  long long n, k, bill, cost;
  cin >> n >> k;
  for(int i = 0; i < n; ++i) {
    cin >> cost;
    if(i != k) {
      bill += cost;
    }
  }
  int charged;
  cin >> charged;
  if(charged == bill/2) {
    cout << "Bon Appetit";
  } else {
    cout << fixed << charged - bill/2;
  }
  return 0;
}
