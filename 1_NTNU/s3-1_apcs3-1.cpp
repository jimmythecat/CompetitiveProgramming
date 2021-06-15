// fibonacci(recursive version)
// 0 1 1 2 3 5 etc.
#include <iostream>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int fib(int n){
	if(n == 0) return 0;
	if(n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}

int main(){
	jimmythecat;
	int n;
	while(cin >> n) cout << fib(n) << '\n';
}