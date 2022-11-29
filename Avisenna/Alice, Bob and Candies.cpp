// https://codeforces.com/problemset/problem/1352/D

#include <bits/stdc++.h>

using namespace std;

int t;

void compute(deque<int> dq)
{
    int alice = dq[0], bob = 0, moves = 1;
    int bt = 1, offset = dq[0], eat_now = 0;
    dq.pop_front();
    while (dq.size() != 0)
    {
        if (bt)
        {
            while (offset >= eat_now && dq.size() != 0)
            {
                eat_now += dq.back();
                dq.pop_back();
            }
            bob += eat_now;
            bt = 0;
        }
        else
        {
            while (offset >= eat_now && dq.size() != 0)
            {
                eat_now += dq.front();
                dq.pop_front();
            }
            alice += eat_now;
            bt = 1;
        }
        offset = eat_now;
        eat_now = 0;
        moves++;
    }
    cout << moves << " " << alice << " " << bob << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    int n, inp;
    deque<int> dq;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> inp;
            dq.push_back(inp);
        }
        compute(dq);
        dq.clear();
    }

    return 0;
}