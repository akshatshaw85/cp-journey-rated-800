#include <bits/stdc++.h>
using namespace std;
bool if_sorted(const vector<int>& a) {
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] >= a[i + 1]) {
            return false;
        }
    }
    return true;
}

void swapI(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        int max_iterations = n * n;
        bool sorted = false;

        while (max_iterations--) {
            bool changed = false;
            for (int j = 1; j < n - 1; j++) {
                if (s[j] > s[j - 1] && s[j] > s[j + 1]) {
                    swapI(s[j], s[j + 1]);
                    changed = true;
                }
            }
            if (if_sorted(s)) {
                sorted = true;
                break;
            }
            if (!changed) break; 
        }

        cout << (sorted ? "yes" : "no") << endl;
    }
    return 0;
}
