//https://codeforces.com/problemset/problem/1348/A
#include <bits/stdc++.h>

using namespace std;

int t;

int res(int inp)
{
    int ans1 = 0, ans2 = 0;
    int capacity = inp / 2;
    for (int i = 1; i <= inp; i++)
    {
        if (i < capacity || i == inp)
        {
            ans1 += pow(2, i);
        }
        else
        {
            ans2 += pow(2, i);
        }
    }
    return ans1 - ans2;
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
        cout << res(inp) << endl;
    }

    return 0;
}