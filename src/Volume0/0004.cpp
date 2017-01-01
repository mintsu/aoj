// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0004&lang=jp
#include <iostream>
using namespace std;

int main() {
    /*
    ax + by = c
    dx + ey = f

    x = (c - by) / a;
    d((c-by/a)) + ey = f
    dc/a -dby/a + ey = f
    -dby/a + ey = f - dc/a
    y(-db/a + e) = f - dc/a
    y = (f - (dc/a)) / (-db/a + e);
    */
    
    double a,b,c,d,e,f,x,y;
    while(cin >> a >> b >> c >> d >> e >> f) {
        y = (f - ((d * c)/a )) / (-(d*b/a) + e);
        x = (c - b * y) / a;
        printf("%.3f %.3f\n",x+0,y+0);
    }

    return 0;
}
