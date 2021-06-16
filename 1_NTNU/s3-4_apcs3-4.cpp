// greenjudge d076
// 注意每個位子挑數字的下限和上限
// << 是左移 >> 是右移 不要搞混...
#include <iostream>
#include <cmath>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int square[10000], num[4], solutions = 0;

void pick(int remain, int id){
	if(id == 3){
		num[3] = int(sqrt(remain));
		if(square[num[3]] == remain){
			solutions++;
			for(int i = 0; i < 4; ++i) cout << num[i] << ' ';
			cout << '\n';
		}
		return;
	}
	int lbound, ubound;
	if(id == 0) lbound = 1; else lbound = num[id - 1];
	ubound = sqrt(remain / (4 - id));
	for(int i = lbound; i <= ubound; ++i){
		num[id] = i;
		pick(remain - square[i], id + 1);
	}
}

int main(){
	jimmythecat;
	for(int i = 1; i < 10000; ++i) square[i] = i * i;
	int n; cin >> n;
	pick(1 << n, 0); if(!solutions) cout << "0\n";
}