#include <stdio.h>

#define MAX_N 2000

int p[MAX_N], tmp[MAX_N]; 
int q[MAX_N][MAX_N], count[MAX_N];

int main(void) {
  int n;
  scanf("%i", &n);
  
  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }
  
  char c;
  while (n > 1) {
    int m = 0;
    for (int i = 0; i < n; i += 2) {
      if (i + 1 < n) {
        q[p[i]][count[p[i]]++] = p[i+1];
        q[p[i+1]][count[p[i+1]]++] = p[i];
        printf("? %i %i\n", p[i], p[i+1]);
        fflush(stdout);
        scanf(" %c", &c);
        tmp[m++] = (c == '>') ? p[i] : p[i+1];
      } else {
        tmp[m++] = p[i];
      }
    }
    n = m;
    for (int i = 0; i < n; i++) {
      p[i] = tmp[i];
    } 
  }
  
  int s = p[0];
  
  n = count[s];
  for (int i = 0; i < n; i++) {
    p[i] = q[s][i];
  }
  
  while (n > 1) {
    int m = 0;
    for (int i = 0; i < n; i += 2) {
      if (i + 1 < n) {
        printf("? %i %i\n", p[i], p[i+1]);
        fflush(stdout);
        scanf(" %c", &c);
        tmp[m++] = (c == '>') ? p[i] : p[i+1];
      } else {
        tmp[m++] = p[i];
      }
    }
    n = m;
    for (int i = 0; i < n; i++) {
      p[i] = tmp[i];
    } 
  }
  
  printf("! %i\n", p[0]);
  
  return 0;
}
