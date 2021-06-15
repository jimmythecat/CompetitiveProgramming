#include <iostream>
#include <iomanip>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main(){
    jimmythecat;
    int h1, m1, s1, h2, m2, s2; char c1, c2, c3, c4;
    cin >> h1 >> c1 >> m1 >> c2 >> s1 >> h2 >> c3 >> m2 >> c4 >> s2;
    s2 -= s1; 
    if(s2 < 0){
        s2 += 60;
        m2--;
    }
    m2 -= m1;
    if(m2 < 0){
        m2 += 60;
        h2--;
    }
    h2 -= h1;
    if(h2 < 0){
        h2 += 24;
    }
    cout << setw(2) << setfill('0') << h2 << c1;
    cout << setw(2) << m2 << c2;
    cout << setw(2) << s2 << '\n';
    // setw() 設定後單次有效 iomanip內其餘函式為持續有效
}