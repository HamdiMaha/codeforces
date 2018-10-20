#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int read(vector<int> &t, int idx) {
  int ret = int(2e9);
  while (idx > 0) {
    ret = min(ret, t[idx]);
    idx -= idx & -idx;
  }
  return ret; 
}

void write(vector<int> &t, int idx, int v) {
  int n = (int)t.size();
  while (idx < n) {
    t[idx] = min(t[idx], v);
    idx += idx & -idx;
  }
}

int main(void) {
  int n;
  scanf("%i", &n);
  
  vector<int> p[3];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      int a;
      scanf("%i", &a);
      p[j].push_back(a);
    }
  }
  
  vector<bool> can(n, false);
  
  for (int j = 0; j < 3; j++) {
    vector<int> ids(n);
    for (int i = 0; i < n; i++) {
      ids[i] = i;
    }
    
    sort(begin(ids), end(ids), [&](int a, int b) {
      return p[j][a] < p[j][b];
    });
    
    // for (int i = 0; i < n; i++) {
//       printf("%i ", p[j][ids[i]]);
//     }
//     puts("");
    
    for (int c = 0; c < 3; c++) {
      if (c == j) continue;
      
      // printf("  NOW Layer %i\n", c);
      
      vector<int> tree(n+1);
      for (int i = 0; i < n + 1; i++) {
        tree[i] = int(2e9);
      }
      // printf("  ");
      for (int i = 0; i < n; i++) {
        // printf("  %i", p[c][ids[i]]);
        write(tree, i+1, p[c][ids[i]]);
      }
      // puts("");
      
      for (int i = 1; i < n; ) {
        int k = i;
        while (k < n && p[j][ids[k]] == p[j][ids[i]]) {
          k++;
        }        
        int min_val = read(tree, i); 
        //printf("AT (%i, %i) Min %i\n", i, k-1, min_val);
        for (int x = i; x < k; x++) {
          if (p[c][ids[x]] > min_val) {
            // printf("%i can WIN\n", ids[x] + 1);
            can[ids[x]] = true;
           }
        }
        i = k;
      }
    }
  }
  
  int count = n;
  for (int i = 0; i < n; i++) {
    if (can[i]) count--;
  }
  
  printf("%i\n", count);
  for (int i = 0; i < n; i++) {
    if (!can[i]) printf("%i ", i + 1);
  }
  puts("");
  
  return 0; 
}
