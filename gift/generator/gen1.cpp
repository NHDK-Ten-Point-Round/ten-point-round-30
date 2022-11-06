#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1000;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    const int group = atoi(argv[2]);
    const int MAXM = atoi(argv[3]);

    int n = rnd.next(1, MAXN);
    int m = rnd.next(1, MAXM);

    vector<int> a;
    for (int i = 1; i <= n; i++)
        a.push_back(i);
    if (group % 2 == 0)
        shuffle(a.begin(), a.end());

    cout << n << ' ' << m << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[i == n - 1];

    for (int i = 0; i < m; i++) {
        shuffle(a.begin(), a.end());
        for (int j = 0; j < n; j++)
            cout << a[j] << " \n"[j == n - 1];
    }

    return 0;
}