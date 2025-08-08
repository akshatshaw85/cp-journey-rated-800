#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int cnt_neg = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == -1) cnt_neg++;
        }
        int ops = 0;
        while (sum < 0) {
            sum += 2;   
            cnt_neg--;   
            ops++;
        }
        if (cnt_neg % 2 != 0) {
            ops++;  
        }
        cout << ops << "\n";
    }
    return 0;
}
