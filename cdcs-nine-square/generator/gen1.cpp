#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    const int MAXN = atoi(argv[2]);
    const int MAXM = atoi(argv[3]);
    const int MAXX = atoi(argv[4]);

    int n = rnd.next(1, MAXN);
    int m = rnd.next(1, MAXM);
    int x = rnd.next(1, min({MAXX, n, m}));

    cout << n << ' ' << m << ' ' << x << endl;

    return 0;
}