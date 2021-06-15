#include <iostream>
#include <cmath>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
#define d double
using namespace std;
void dis(d, d, d, d);
int main(){
	jimmythecat;
	d x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	dis(x1, x2, y1, y2);
}
void dis(d x1, d x2, d y1, d y2){
	cout << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) << '\n';
}