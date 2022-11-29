//https://codeforces.com/problemset/problem/1352/A
#include <bits/stdc++.h>

using namespace std;

int t;

void op(int n)
{
    vector<int> res;
    int ctr = 1;
    int val = n;
    while (n / 10 > 0)
    {
        if (n % 10 != 0)
        {
            res.push_back((n % 10) * ctr);
            val -= (n % 10) * ctr;
        }
        ctr *= 10;
        n /= 10;
    }
    res.push_back(val);

    int len = res.size();
    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
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
        op(inp);
    }

    return 0;
}