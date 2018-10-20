#include <stdio.h>

#define MAX_N 200000

int main(void) {
  int n;
  scanf("%i", &n);
  
  long long ans = 0;
  
  int open = 0;
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%i", &a);
    if (a >= open) {
      ans += a - open;
    }
    open = a;
  }
  
  printf("%lld\n", ans);
  
  return 0;
}
