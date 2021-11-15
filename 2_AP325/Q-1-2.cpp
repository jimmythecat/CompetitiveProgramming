#include <iostream>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int eval(){
	int x, y, z;
	string s; cin >> s;
	if(s[0] == 'f'){
		x = eval();
		return 2 * x - 3;
	}
	else if(s[0] == 'g'){
		x = eval();
		y = eval();
		return 2 * x + y - 7;
	}
	else if(s[0] == 'h'){
		x = eval();
		y = eval();
		z = eval();
		return 3 * x - 2 * y + z;
	}
	else return stoi(s);
}

int main(){
	jimmythecat;
	cout << eval() << '\n';
}