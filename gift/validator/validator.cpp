#include "testlib.h"
#include <bits/stdc++.h>

const int MAXN = 1000;
const int MAXM[] = {1000, 1, 1, 1000, 1000};

int a[MAXN + 5];
int p[MAXN + 5][MAXN + 5];

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    const int group = validator.group()[0] - '0';

    int n = inf.readInt(1, MAXN, "n");    
    inf.readSpace();
    int m = inf.readInt(1, MAXM[group], "m");
    inf.readEoln();

    std::set<int> st;

    for (int i = 1; i <= n; i++) {
        a[i] = inf.readInt(1, n, "a[i]");
        st.insert(a[i]);
        if (i < n)
            inf.readSpace();

        if (group % 2)
            ensure(a[i] == i);
    }
    inf.readEoln();
    ensure(st.size() == n);


    for (int i = 1; i <= m; i++) {
        st.clear();
        for (int j = 1; j <= n; j++) {
            p[i][j] = inf.readInt(1, n, "p[i][j]");
            st.insert(p[i][j]);
            if (j < n)
                inf.readSpace();
        }
        inf.readEoln();
        ensure(st.size() == n);
    }
    
    inf.readEof();
}