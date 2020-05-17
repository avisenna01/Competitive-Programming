//https://codeforces.com/problemset/problem/1343/A
#include <bits/stdc++.h>

using namespace std;

int t;

int op(int inp)
{
    int div = 3;

    while (inp % div != 0)
    {
        div = div * 2 + 1;
    }

    return inp / div;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    int inp;
    for (int i = 0; i < t; i++)
    {
        cin >> inp;
        cout << op(inp) << endl;
    }

    return 0;
}