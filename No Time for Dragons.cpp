#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main( void ) {
  int n; scanf("%d", &n);
  
  long long needed = 0, have = 0;
  
  
  vector<pair<long long, pair<long long, long long>>> V;
  for(int i = 0; i < n; i++) {
    long long a, b; scanf("%lld %lld", &a, &b);
    V.push_back({- a + b, {a, b}});
  }
  
  sort(begin(V), end(V));
  
  for(auto p : V) {
    long long a = p.second.first, b = p.second.second;
    if( a > have ) {
      needed += a - have;
      have = a;
    }
    have -= b;
  }

  printf("%lld\n", needed);

  return 0;
}
