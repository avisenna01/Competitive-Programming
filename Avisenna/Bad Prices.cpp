// https://codeforces.com/problemset/problem/1213/B
#include <bits/stdc++.h>

using namespace std;

int t;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    int n, temp, max, count = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                if (v[j] > v[k])
                {
                    count++;
                    break;
                }
            }
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}