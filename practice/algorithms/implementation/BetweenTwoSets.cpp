#include <iostream>
using namespace std;

inline long gcd(long x, long y) {
  return y == 0 ? x : gcd(y, x%y);
}

inline long lcm(long x, long y) {
  return x*(y/gcd(x,y));
}

inline long lcmOf(int n) {                                   // Calculates the lcm of n elements read from the input stream
  long lcmX, x;
  cin >> lcmX;
  for(long i = 0; i < n - 1; ++i) {
    cin >> x;
    lcmX = lcm(lcmX,x);
  }
  return lcmX;
}

inline long gcdOf(int n) {                                   // Calculates the gcd of n elements read from the input stream
  long gcdX, x;
  cin >> gcdX;
  for(long i = 0; i < n - 1; ++i) {
    cin >> x;
    gcdX = gcd(gcdX,x);
  }
  return gcdX;
}

inline int commonMultipleAndDivisor(long x, long y) {        // Calculates the number of elements that are simultaneously multiples of x and divisors of y 
  int count = 0;
  for(long i = x; i <= y; ++i) {
    if(y%i == 0 && i%x == 0) {
      count++;
    }
  }
  return count;
}

int main() {
  int sizeA, sizeB;
  cin >> sizeA >> sizeB;
  int count = 0;
  long lcmA = lcmOf(sizeA);
  long gcdB = gcdOf(sizeB);
  cout << commonMultipleAndDivisor(lcmA,gcdB);
  return 0;
}
