#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        vector<int> arr;
        for (int j = b; j > 0; j--) {
            if (j == c) continue;
            arr.push_back(j);
        }

        int k = a;
        vector<int> ans;

        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] <= k) {
                int x = k / arr[j];
                k -= arr[j] * x;
                for (int l = 0; l < x; l++) {
                    ans.push_back(arr[j]);
                }
            }
        }

        if (k == 0) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
         cout<<ans.size()<<endl;
        for (int s : ans) {
            cout << s <<" ";
        }
        cout<< endl;
    }
}
