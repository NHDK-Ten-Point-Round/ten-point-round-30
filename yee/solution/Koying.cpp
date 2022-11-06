#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int ans = 0, now = 0;
    string tar = "yee";

    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        now += (s[i] == tar[now]);
        ans += now / 3;
        now %= 3;
    }

    cout << ans << endl;

    return 0;
}