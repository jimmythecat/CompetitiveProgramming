// zerojudge b964
#include <iostream>
#include <algorithm>
#define jimmythecat ios_base::sync_with_stdio(false), cin.tie(0);
using namespace std;
int main(){
    jimmythecat;
    int arr[30], t, max_unqualify = -1, min_qualify = 101; cin >> t;
    for(int i = 0; i < t; ++i){
        cin >> arr[i];
        if(arr[i] > 59 && arr[i] < min_qualify) min_qualify = arr[i];
        if(arr[i] < 60 && arr[i] > max_unqualify) max_unqualify = arr[i];
    }
    sort(arr, arr + t);
    for(int i = 0; i < t; ++i) cout << arr[i] << ' '; cout << '\n';
    if(max_unqualify > 60 || max_unqualify == -1) cout << "best case\n";
    else cout << max_unqualify << '\n';
    if(min_qualify < 60 || min_qualify == 101) cout << "worst case\n";
    else cout << min_qualify <<'\n';
}
