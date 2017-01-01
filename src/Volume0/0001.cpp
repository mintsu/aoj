// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0001
#include <iostream>
#include <algorithm>
using namespace std;

#define MOUNT_NUM 10

int main() {
    int height[MOUNT_NUM];
    for (int i = 0; cin >> height[i]; i++);
    
    sort(height, height + MOUNT_NUM, greater<int>());

    cout << height[0] << endl;
    cout << height[1] << endl;
    cout << height[2] << endl;
    
    return 0;
}
