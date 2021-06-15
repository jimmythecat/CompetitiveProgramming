// zerojudge b548
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
#define hasfilled 666  // 填過了
using namespace std;

int bingo[5][5]; vector<pair<int, int>> v;

bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first) return a.second < b.second;
	return a.first > b.first;
}

void in(int fillin){
	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < 5; ++j){
			if(bingo[i][j] == fillin){
				bingo[i][j] = hasfilled;  
				break;
			}
		}
	} 
}

void count(){
	for(int i = 0; i < 5; ++i){
		for(int j = 0; j < 5; ++j){
			if(bingo[i][j] == hasfilled) continue;
			int count = 0, tmpx = 0, tmpy = 0, diagonal1 = 0, diagonal2 = 0;
			for(int k = 0; k < 5; ++k){
				if(bingo[i][k] == hasfilled) tmpx ++;
				if(bingo[k][j] == hasfilled) tmpy ++; 
			}
			if(i == j) for(int k = 0; k < 5; ++k) if(bingo[k][k] == hasfilled) ++diagonal1; // 左上右下對角線
			if(i + j == 4){		// 右上左下對角線	
				for(int k = 0; k < 5; ++k){
					if(bingo[k][4 - k] == hasfilled) ++diagonal2;
				}		
			}																		
			if(tmpx == 4) count++;
			if(tmpy == 4) count++;
			if(diagonal1 == 4) count++;
			if(diagonal2 == 4) count++;
			v.push_back({count, bingo[i][j]});
		}
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].second << '\n';
}

int main(){
	jimmythecat;
	for(int i = 0; i < 5; ++i) for(int j = 0; j < 5; ++j) cin >> bingo[i][j];
	int fillin;
	while(cin >> fillin && fillin != -1) in(fillin);
	count();
}
