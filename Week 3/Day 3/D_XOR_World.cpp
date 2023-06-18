#include <bits/stdc++.h>
using namespace std;
long long f(long long x) {
  if (x % 2 == 0) {   //if x is a even number divide x by 2, a=x/2;
    long long a = x / 2;
    if (a % 2 == 0) {   //if a is even then return xor of 0 and x;
      long long ret = 0 ^ x;
      return ret;
    } else {
      long long ret = 1 ^ x;  // if a is odd then return xor of 1 and x;
      return ret;
    }
  } else {
    long long a = (x + 1) / 2;  //if x is a odd number than a=x+1/2;
    if (a % 2 == 0) {   
      return 0;          // if a is even than return 0;
    } else {
      return 1;    // if a is odd than return 1;
    }
  }
}

int main() {
  long long x, y;
  cin >> x >> y;

  if (x == y) {  // if x and y is equal then xor of x to y is x or y;
   cout << x<<endl;
  } else if (x > 0) {    // if x is greater than 0 then xor of  x to y is f(x-1)^ f(y);
    cout << (f(x - 1) ^ f(y)) <<endl;
  } else {
   cout << f(y) <<endl;  //if x is less than 0 xor of x to y is f(y);
  }

  return 0;
}
