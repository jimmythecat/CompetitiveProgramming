/* 
    十分重要：使用 switch case 時一定要記得在每個 case 述句結束後加 break
    因為 switch 的原理是找到該相符的 case 後執行完剩下的述句直到遇見 break 為止！！！
*/

#include <iostream>
using namespace std;
int main(){
    int day; cin >> day;
    switch (day){
        case 1:
            cout << "猴子穿新衣\n";
            break;
        case 2:
            cout << "猴子肚子餓\n";
            break;
        case 3:
            cout << "猴子去爬山\n";
            break;
        case 4:
            cout << "猴子看電視\n";
            break;
        default:
            cout << "忘記了...\n"; 
    }
}
