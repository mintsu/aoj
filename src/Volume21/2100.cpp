// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2100

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int up = 0, down = 0;
        int n;
        cin >> n;
        int h;
        cin >> h;
        int prev = h;
        for (int j=1; j<n; j++) {
            cin >> h;
            if (h > prev) {
                if (up < h - prev) {
                    up = h - prev;
                }
            } else {
               if ( down < prev - h)  {
                    down = prev - h;
               }
            }
            prev = h;
        }
        cout << up << " " << down << endl;
    }

}
