#include <iostream>
using namespace std;

inline long gcd(long x, long y) {
  return y == 0 ? x : gcd(y, x%y);
}

inline long lcm(long x, long y) {
  return x*(y/gcd(x,y));
}

inline long forAllElements(long (* f)(long,long), int n) {
  long fX, x;
  cin >> fX;
  for(long i = 0; i < n - 1; ++i) {
    cin >> x;
    fX = f(fX,x);
  }
  return fX;
}

inline int commonMultipleAndDivisor(long x, long y) {        // Computes the number of elements that are simultaneously multiples of x and divisors of y 
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
  long lcmA = forAllElements(&lcm, sizeA);                   // Calculates lcm of all elements
  long gcdB = forAllElements(&gcd, sizeB);                   // Calculates gcd of all elements
  cout << commonMultipleAndDivisor(lcmA,gcdB);
  return 0;
}
