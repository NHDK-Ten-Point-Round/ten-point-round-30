#include <iostream>

using namespace std;

const int MAXN = 1005;

int a[MAXN], gift[MAXN][MAXN];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        gift[0][i] = a[i];
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            int p;
            cin >> p;
            gift[i][p] = gift[i - 1][j];
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (gift[m][i] == a[i])
            ans++;
    }
    cout << ans << '\n';
    
    return 0;
}