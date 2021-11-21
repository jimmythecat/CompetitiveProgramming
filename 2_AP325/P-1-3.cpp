#include <iostream>
#include <algorithm>
#define int long long
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int a[50050];

int cut(int left, int right){
	if(right - left <= 1) return 0;   // 不能再切了
	int k = (a[right] + a[left]) / 2;
	/*
	int m = left;
	//跳躍式二分搜
	for(int jump = k; jump > 0; jump >>= 1){
		while(m + jump < right && a[m + jump] < k){
			m += jump;
		}
	}
	if(a[m + 1] - k < k - a[m]) m++;
	*/
	int m = lower_bound(a + left, a + right, k) - a;   
	//lb回傳區間中找到的第一個>=x的值的位置
	if(k - a[m - 1] <= a[m] - k) m--;
	return (a[right] - a[left]) + cut(left, m) + cut(m, right);
}

signed main(){
	jimmythecat;
	int n, l; 
	cin >> n >> l; 
	a[0] = 0; a[n + 1] = l;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	cout << cut(0, n + 1) << '\n';
}