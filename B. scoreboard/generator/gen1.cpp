#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    cout << rnd.next(1, (int)1e9) << endl;
    return 0;
}