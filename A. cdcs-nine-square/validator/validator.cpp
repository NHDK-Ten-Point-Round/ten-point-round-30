#include "testlib.h"
#include <bits/stdc++.h>

const int MAXNM[] = {(int)1e9, 1000, 1000, (int)1e9};
const int MAXX[] = {(int)1e9, 1, 1000, (int)1e9};

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);

    const int group = validator.group()[0] - '0';

    int n = inf.readInt(1, MAXNM[group], "n");    
    inf.readSpace();
    int m = inf.readInt(1, MAXNM[group], "m");
    inf.readSpace();
    int x = inf.readInt(1, MAXX[group], "x");
    inf.readEoln();

    inf.readEof();
}