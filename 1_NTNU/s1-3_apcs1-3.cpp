// 大數階乘 + 大數除法 + 減一

#include <iostream>
#include <cstring>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;

int a[75];
void power(int);
void divide();

int main(){
    jimmythecat;
    int num; 
    while(cin >> num){
        memset(a, 0, sizeof(a));
        a[0] = 1;
        power(num);                       // 階乘
        a[0] -= 1;                        // 減一
        for(int i = 0; i < 75; ++i){
            if(a[i] < 0){
                a[i] += 10;
                a[i + 1]--;
            }
            else break;
        } 
        divide();                         // 除三
        bool flag = 0;
        for(int i = 74; i >= 0; --i){
            if(a[i] == 0 && !flag) continue;
            flag = 1;
            cout << a[i];
        }
        cout << '\n';
    }
}

void power(int n){
    // 大數階乘
    for (int i = 0; i < n; ++i){
        int carry = 0;
        for (int j = 0; j < 75; ++j){
            a[j] = a[j] * 4 + carry;
            carry = a[j] / 10;
            a[j] %= 10;
        }
    }
}

void divide(){
    int carry = 0;
    for (int i = 74; i >= 0; --i){
        a[i] += carry * 10;
        carry = a[i] % 3;
        a[i] /= 3;
    }
}