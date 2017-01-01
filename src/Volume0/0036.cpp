// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0036

#include <iostream>
using namespace std;
string map[8];

int main() {
    while (true) {
        for(int i=0;i<8;i++){
            if(!(cin>>map[i])) {
                return 0;
            }
        }
        bool flag = false;
        bool flag2 = false;
        int count = 0;
        int count2 = 0;

        for (int i=0; i<8; i++) {
            for(int j=0; j<8; j++) {
                if (flag2) count2++;
                if (map[i][j] == '1') {
                    flag2 = true;
                    count++;
                    if (count == 4) {
                        flag = true;
                        break;
                    }
                } 
            }
            if (flag) break;
        }
        if (count2 == 9) cout << 'A' << endl;
        if (count2 == 24) cout << 'B' << endl;
        if (count2 == 3) cout << 'C' << endl;
        if (count2 == 15) cout << 'D' << endl;
        if (count2 == 10) cout << 'E' << endl;
        if (count2 == 17) cout << 'F' << endl;
        if (count2 == 8) cout << 'G' << endl;
    }
}
