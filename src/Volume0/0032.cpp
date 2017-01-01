// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0032&lang=jp

#include <iostream>
#include <stdio.h>

int main() {
    int l1,l2,l3;
    int rectangles = 0, lozenges = 0;
    while (scanf("%d,%d,%d", &l1,&l2,&l3) != EOF) {
        if (l1 == l2) {
           lozenges++; 
           continue;
        } else if ( l3*l3 == (l1*l1 + l2*l2)) {
           rectangles++; 
           continue;
        }
    } 
    std::cout << rectangles << std::endl;
    std::cout << lozenges << std::endl;
}

