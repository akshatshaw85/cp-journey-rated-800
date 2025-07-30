#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  

    while (T--) {
        int n;
        cin >> n;
        int maxZero= 0, current = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 0)
                current++;
            else
                current = 0;

            maxZero = max(maxZero, current);
        }

        cout << maxZero << endl;
    }
    return 0;
}
