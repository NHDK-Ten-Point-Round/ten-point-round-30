#include <iostream>
#include <bits/stdc++.h>

using namespace std;


signed main() {
    long long n, m, x;
    cin >> n >> m >> x;

    cout << ((n + x - 1) / x) * ((m + x - 1) / x) << '\n';

    return 0;
}