#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n; scanf("%d", &n);
  vector<pair<long long, long long> > score(n);
  
  for(int i = 0; i < n; i++)
    scanf("%lld %lld", &score[i].first, &score[i].second);
  
  sort(begin(score), end(score));
  
  long long startingScore = score[n - 1].first;
  int ans = 1;
  
  for(int i = n - 2; i >= 0; i--) {
    if( startingScore >= score[i].first && startingScore <= score[i].second ) ans++; 
  }
  
  printf("%d\n", ans);
  
  return 0;
}
