// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0003
#include <iostream>
using namespace std;

class Triangle {
public:
    int cathetus1,cathetus2,hypotenuse;

    Triangle(int a, int b, int c) {
        hypotenuse = (a > b ? (a > c ? a : c) : (b > c ? b : c));
        cathetus1 = (a == hypotenuse) ? b : a;
        cathetus2 = (a == hypotenuse) ? c : (b == hypotenuse ? c : b);
    }

    bool isRightTriangle() {
        if (hypotenuse * hypotenuse == cathetus1 * cathetus1 + cathetus2 * cathetus2) {
            return true;
        }
        return false;
    }
};

int main() {
    int n,a,b,c;
    Triangle *triObj;
    cin >> n;
    while (cin >> a >> b >> c) {
        triObj = new Triangle(a,b,c);
        if (triObj->isRightTriangle()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        delete(triObj);
    }
    return 0;
}

