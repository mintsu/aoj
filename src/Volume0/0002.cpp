//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0002
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    while (cin >> a >> b)  {
        cout << to_string(a + b).length() << endl;   
    }

    return 0;
}
