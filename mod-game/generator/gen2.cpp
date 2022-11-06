#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

const int MAXA = 100;
const int MAXP = 1000000;

int fpow(long long a, long long b, long long P) {
    long long ans = 1;
    while (b) {
        if (b & 1)
            ans = (ans * a) % P;
        a = (a * a) % P;
        b >>= 1;
    }
    return ans;
}

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    int a, b, P;
    
    a = atoi(argv[2]);
    P = 10;
    
    if (rnd.next(0, 1)) {
        b = fpow(a, rnd.next(1, P), P);
    }
    else {
        b = rnd.next(0, P - 1);
    }

    cout << a << ' ' << b << ' ' << P << endl;
    return 0;
}
