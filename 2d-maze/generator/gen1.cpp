#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int MAXN = atoi(argv[2]);
    int MAXM = atoi(argv[3]);

    int tmp = rnd.next(3, MAXN);
    int n = (tmp % 2 ? tmp : MAXN);
    int m = rnd.next(0, min(MAXM, n * n));

    cout << n << ' ' << m << endl;

    vector<int> v;
    for (int i = 1; i <= n * n; i++)
        v.push_back(i);
    shuffle(v.begin(), v.end());
    for (int i = 0; i < m; i++)
        cout << v[i] << " \n"[i == m - 1];
    return 0;
}