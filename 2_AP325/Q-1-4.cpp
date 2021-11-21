//https://yuihuang.com/zj-f638/
#include <iostream>
#include <cmath>
#define ll long long
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

const int maxn = 50050;
ll n, level, a[maxn], leftcost[maxn], rightcost[maxn];

ll cut(int left, int right, int lv){
	if(lv > level || right - left < 2) return 0;
	ll delta = 0; leftcost[left] = 0; 
	for(int i = left + 1; i <= right; ++i){
		delta += a[i - 1];
		leftcost[i] = leftcost[i - 1] + delta;
	}
	delta = 0; rightcost[right] = 0;
	for(int i = right - 1; i >= left; --i){
		delta += a[i + 1];
		rightcost[i] = rightcost[i + 1] + delta;
	}
	ll mn = 100000000000000, k;
	// 不能切端點
	for(int i = left + 1; i <= right - 1; ++i){
		ll cost = abs(rightcost[i] - leftcost[i]);
		if(cost < mn){
			mn = cost;
			k = i;
		}
	}
	return a[k] + cut(left, k - 1, lv + 1) + cut(k + 1, right, lv + 1);
}

int main(){
	jimmythecat;
	cin >> n >> level;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	cout << cut(1, n, 1) << '\n';
}