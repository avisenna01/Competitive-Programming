// https://codeforces.com/problemset/problem/1208/A
#include <bits/stdc++.h>

using namespace std;

int t;

int xorFunc(int a, int b)
{
    return a ^ b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    int a, b, n;

    for (int i = 0; i < t; i++)
    {

        cin >> a >> b >> n;

        if (n % 3 == 0)

            cout << a << endl;

        else if (n % 3 == 1)

            cout << b << endl;

        else

            cout << xorFunc(a, b) << endl;
    }

    return 0;
}