
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
 
        // Try max y = n / k
        long long y = n / k;
        long long rem = n - y * k;
 
        if(rem % 2 == 0) cout << "YES" << endl;
        else {
            y--;
            rem = n - y * k;
            if(y >= 0 && rem % 2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
