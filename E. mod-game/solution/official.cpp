#include <iostream>

using namespace std;

int main()
{
    int a, b, P;

    cin >> a >> b >> P;

    int tmp = 1;

    bool find_ans = false;

    for (int i = 1; i <= P; i++) {
        tmp = (tmp * a) % P;
        if (tmp == b) {
            cout << i << '\n';
            find_ans = true;
            break;
        }
    }

    if (!find_ans)
        cout << -1 << '\n';

    return 0;
}