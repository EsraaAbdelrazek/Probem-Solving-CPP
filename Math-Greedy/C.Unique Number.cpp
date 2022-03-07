#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x > 45) {
            cout << -1 << endl;
            continue;
        }
        string ans = "";
        for (int i = 9; i > 0; i--) {
            if (x >= i) {
                x -= i;
                ans += i + '0';
            }
        }
        set<char> s;
        for (char c : *ans)
            s.insert(c);
        for (char c : s)
            cout << c;
        cout << endl;
    }
}
