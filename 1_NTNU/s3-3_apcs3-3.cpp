// greenjudge d068
// tower of hanoi (three colors version)
// 底下的一整排排完後即可忽略
#include <iostream>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int cnt = 0;

void move(int n, char from, char buf, char to){
	if(n <= 0) return;
	move(n - 1, from, to, buf);
	cout << "ring " << n << " : " << from << " => " << to << '\n'; cnt++;
	move(n - 1, buf, from, to);
}

void distribute(int n, char from, char buf, char to){				
	if(n <= 0) return;
	move(n - 1, from, to, buf);
	cout << "ring " << n << " : " << from << " => " << to << '\n'; cnt++;
	distribute(n - 2, buf, to, from);
}

int main(){
	jimmythecat;
	int n; cin >> n; distribute(n, 'A', 'B', 'C');
	cout << "共需" << cnt << "個移動\n";
}