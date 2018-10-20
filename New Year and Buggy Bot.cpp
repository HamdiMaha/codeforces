#include<iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;


int  main (){
	int n, m; cin >> n >> m;
	char grid[n][m];
	int st_i, st_j, end_i, end_j;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			cin >> grid[i][j];
			if (grid[i][j] == 'S'){
				st_i = i;
				st_j = j;
			}
			if (grid[i][j] == 'E'){
				end_i = i;
				end_j = j;
			}
				
		}
	}
	
	string s; cin >> s;
	char myperm[] = {'D','U','L','R'};
	sort (myperm,myperm+4);
	int count = 0;
	do {
		bool flag = false;
		int now_i = st_i;
		int now_j = st_j;
		for (int i = 0; i < s.size(); i++) {
			char mov = myperm[s[i]-'0'];
			if (mov == 'D')
				now_i++;
			if (mov == 'U')
					now_i--;
			if (mov == 'L')
					now_j--;
			if (mov == 'R')
					now_j++;
			if (grid[now_i][now_j] == '#'){
				flag = false;
				break;
			}
			if (now_i == end_i && now_j == end_j ){
				flag = true;
				break;
			}
			if (now_i >= n ||now_j >= m || now_i < 0  || now_j < 0 ){
				flag = false;
				break;
			}	
		}
		if  (flag == true)
			count++;
		
	}while(next_permutation(myperm,myperm+4));
	cout << count <<endl;
	
	return 0;
}
