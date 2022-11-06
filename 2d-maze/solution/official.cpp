#include <iostream>

using namespace std;

const int MAXN = 7505;

int maze[MAXN][MAXN];
bool spe[MAXN * MAXN];  

int p[4][2] = {
    {1, 0},
    {0, -1},
    {-1, 0},
    {0, 1}
};

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        spe[k] = true;
    }
    
    int now = 0;
    int x = -1, y = n - 1;

    while (now < n * n) {
        for (int i = 0; i < 4 && now < n * n; i++) {
            while (1) {
                int tmpx = x + p[i][0], tmpy = y + p[i][1];
                if (tmpx >= 0 && tmpx < n && tmpy >= 0 && tmpy < n && !maze[tmpx][tmpy]) {
                    x = tmpx;
                    y = tmpy;
                    now++;
                    maze[x][y] = now;
                }
                else
                    break;
            }
        }
    }

    int ans = 0;
    x = 0, y = n - 1;

    while (maze[x][y] != n * n) {
        ans++;
        int mx = 0, pos = 0;
        for (int i = 0; i < 4; i++) {
            int tmpx = x + p[i][0], tmpy = y + p[i][1];
            if (tmpx >= 0 && tmpx < n && tmpy >= 0 && tmpy < n) {
                if ((maze[tmpx][tmpy] > mx && spe[maze[x][y]]) || (maze[tmpx][tmpy] == maze[x][y] + 1 && maze[tmpx][tmpy] > mx)) {
                    mx = maze[tmpx][tmpy];
                    pos = i;
                }
            }
        }

        x += p[pos][0];
        y += p[pos][1];
    }

    cout << ans + 1 << endl;

    return 0;
}