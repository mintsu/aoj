#include <iostream>
#include <cstdlib>

using namespace std;

int LCS(string X, string Y);

int main () {
    int q;
    string X,Y;
    cin >> q;

    for (int i=0; i<q; i++) {
        cin >> X;
        cin >> Y;
        cout << LCS(X, Y) << endl;
    }

}

int LCS(string X, string Y) {

    int n = X.size();
    int m = Y.size();

    int **dp = (int **)malloc(sizeof(int*) * n+1);
    for (int i=0; i<n+1; i++) {
        dp[i] = (int *)calloc(m+1, sizeof(int));
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (X[i] == Y[j]) {
                dp[i+1][j+1] = dp[i][j] + 1;
            } else {
                dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
    }
    int result = dp[n][m];
    for (int i=0; i<n+1; i++) {
        free(dp[i]);
    }
    free(dp);
    dp = NULL;
    return result;
}
