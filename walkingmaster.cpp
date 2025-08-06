#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int startx, starty, endx, endy;
        cin >> startx >> starty >> endx >> endy;

        int count = 0;

        if (starty > endy) {
            cout << "-1" << endl;
            continue;
        }


        int steps = endy - starty;  
        startx += steps;
        starty += steps;
        count += steps;

        if (startx < endx) {
            cout << "-1" << endl; 
        } else {
            count += (startx - endx); 
            cout << count << endl;
        }
    }
    return 0;
}
