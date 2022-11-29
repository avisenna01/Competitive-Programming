// https://codeforces.com/problemset/problem/1213/B
#include <bits/stdc++.h>

using namespace std;

int t;
stack<int> s;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    int n, inp, count = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> inp;

            if (s.size() > 0 && s.top() > inp)
            {
                while (!s.empty() && s.top() > inp)
                {
                    s.pop();
                    count++;
                }
            }
            s.push(inp);
        }
        cout << count << endl;
        count = 0;
        while (!s.empty())
            s.pop();
    }

    return 0;
}