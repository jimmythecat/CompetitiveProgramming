// zerojudge c002
#include <iostream>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int f91(int n){
	if(n >= 101) return n - 10;
	return f91(f91(n + 11));
}

int main(){
	jimmythecat;
	int n; 
	while(cin >> n && n){
		cout << "f91(" << n << ") = " << f91(n) << '\n';
	}
}