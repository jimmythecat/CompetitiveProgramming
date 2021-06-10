#include <iostream>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main(){
	jimmythecat;
	int n, p[50500], g = 0; bool vis[50500] = {0};
	cin >> n; for(int i = 0; i < n; ++i) cin >> p[i];
	for(int i = 0; i < n; ++i){
		if(vis[i]) continue;
		while(!vis[i]){
			vis[i] = 1;
			i = p[i];
		}
		g++;
	}
	cout << g << '\n';
}
