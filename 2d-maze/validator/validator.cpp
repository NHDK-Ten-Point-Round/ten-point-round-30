#include "testlib.h"
#include <bits/stdc++.h>

const int MAXN[] = {7500, 750, 750, 7500, 7500};
const int MAXM[] = {1'000'000, 0, 1'000'000, 0, 1'000'000};

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    const int group = validator.group()[0] - '0';

    int n = inf.readInt(3, MAXN[group], "n");    
    inf.readSpace();
    int m = inf.readInt(0, std::min(MAXM[group], n * n), "m");
    inf.readEoln();

    std::set<int> st;
    for (int i = 0, k; i < m; i++) {
        k = inf.readInt(1, n * n, "k");
        if (i != m - 1)
            inf.readSpace();
        else
            inf.readEoln();
        st.insert(k);
    }
    ensure(m == st.size());
    inf.readEof();
}