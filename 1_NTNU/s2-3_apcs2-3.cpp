// 閏年判斷...
#include <iostream>
#include <iomanip>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int days[] = {0 ,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leap(int year){
	if(year % 4 != 0) return 0;
	else if(year % 100 != 0) return 1;
	else if(year % 400 != 0) return 0;
	else if(year % 400 == 0) return 1;
}

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b); 
}

int lcm(int a, int b){
	return a * b / gcd(a, b);
}

int main(){
	jimmythecat;
	int n, a[10000], y, m, d; char c; 
	cin >> n;
	cin >> a[0];
	for(int i = 1; i < n; ++i){
		cin >> a[i];
		a[i] = lcm(a[i - 1], a[i]);
	}
	cin >> y >> c >> m >> c >> d;
	d += a[n - 1];
	if(leap(y)) days[2] = 29;
	while(d > days[m]){
		d -= days[m];
		m ++;
		if(m == 13){
			m = 1;
			y ++;
			if(leap(y)) days[2] = 29;
			else days[2] = 28;
		}
	}
	cout << setw(4) << setfill('0') << y << c 
	<< setw(2) << m << c << setw(2) << d << '\n';
}