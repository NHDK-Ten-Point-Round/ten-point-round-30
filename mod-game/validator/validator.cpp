#include "testlib.h"
#include <bits/stdc++.h>

const int MAXA[] = {(int)1e6, (int)1e6, 2, 3, (int)1e6};
const int MAXP[] = {(int)1e6, (int)1e6, 10, 10, (int)1e6};
const int MAXB[] = {(int)1e6, 0, (int)1e6, (int)1e6, (int)1e6};

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    const int group = validator.group()[0] - '0';

    int a = inf.readInt(1, MAXA[group], "n");    
    inf.readSpace();
    int b = inf.readInt(0, MAXB[group], "m");
    inf.readSpace();
    int P = inf.readInt(1, MAXP[group], "P");
    inf.readEoln();
    
    inf.readEof();
}