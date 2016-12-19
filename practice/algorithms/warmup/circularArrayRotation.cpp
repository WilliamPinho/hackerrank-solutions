#include <vector>
#include <iostream>
using namespace std;

int main() {
  int N, K, Q, m;
  cin >> N >> K >> Q;
  K = K%N;                         // If K is bigger than N, then the number of rotations is equivalent to K mod N
  vector<int> v(N);
  for(int i = 0; i < N; ++i) {
    cin >> v[i];
  }
  while(Q > 0) {
    cin >> m;
    cout << v[(N-K+m)%N] << endl;  // Each element is shifted K positions to the right, which means that the new 0th element is the one originally in position N - K.  
    Q--;                           // and so the mth is the (N - K + m) mod N element.
  }
  return 0;
}
