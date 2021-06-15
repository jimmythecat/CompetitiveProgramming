#include <iostream>
#include <string>
#define ll long long
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

string ans[12] = {};
void find();

int main(){
	jimmythecat;
 	find();	
	int t, n; cin >> t;
	while(t--){
		cin >> n;
		cout << ans[n] << '\n';
	}
}

void find(){
	for(int i = 1; i < 1000000; ++i){
		ll square = i * i;
		string s = to_string(square);
		int len = s.length();
		bool ok = 1;
		for(int i = 0; i < len; ++i){
			if(s[i] % 2 != 0){
				ok = 0;
				break; 
			}
		}
		if(ok && ans[len].empty()) ans[len] = s; 
	}
}
