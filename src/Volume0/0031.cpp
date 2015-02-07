// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0031&lang=jp

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int weight[10] = {1,2,4,8,16,32,64,128,256,512};

int main() {
    int w;
    while (cin >> w){
        stringstream ss;
        for (int i=0; i < 10; i++) {
            if (w & 1) {
                ss << weight[i] <<  " ";
            }
            w = w >> 1; 
        }
        string ans = ss.str();
        cout << ans.substr(0, ans.size() -1) << endl;
    }
}
