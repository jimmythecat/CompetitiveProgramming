#include <iostream>
#include <string>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int eval(){
	int x, y;
	string s; cin >> s;
	if(s[0] == 'f'){
		x = eval();
		return 2 * x - 1;
	}
	else if(s[0] == 'g'){
		x = eval();
		y = eval();
		return x + 2 * y - 3;
	}
	else return stoi(s);
}

int main(){
	jimmythecat;
	cout << eval() << '\n';
}