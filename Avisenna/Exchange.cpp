// https://codeforces.com/problemset/problem/1765/E?f0a28=1

#include <bits/stdc++.h>

using namespace std;

int t;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, q;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> a >> b;

        if (a <= b) {
            q = n/a;
            if (n % a != 0) {
                q++;
            }
        }
        else {
            q = 1;
        }

        cout << q << endl;
    }
    
    return 0;
}