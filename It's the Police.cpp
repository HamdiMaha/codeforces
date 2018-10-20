#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

const int MAXN = (int) 2e5 + 200;

vector<int> adj[MAXN];
int res[MAXN];

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  
  for(int i = 0; i < m; i++) {
    int u, v; scanf("%d %d", &u, &v);
    adj[u].push_back( v );
    adj[v].push_back( u );
  }
  
  int crimeNode = 1;
  for(int i = 1; i <= n; i++) {
    if( adj[ crimeNode ].size() > adj[ i ].size() ) crimeNode = i;
  }
  
  memset(res, 0, sizeof res);
  
  res[ crimeNode ] = 1;
  for(int i = 0; i < adj[crimeNode].size(); i++) {
    int v = adj[crimeNode][ i ];
    res[v] = 1;
  }
  
  for(int i = 1; i <= n; i++) {
    printf("%d%c", !res[i], i == n ? '\n' : ' ');
  }
  
  return 0;
}
