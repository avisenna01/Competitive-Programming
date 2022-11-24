// https://codeforces.com/problemset/problem/1418/A
#include <bits/stdc++.h>

using namespace std;

int t;
long int x, y, k;
long int res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y >> k;

        res = 0;

        // while ((1 + (x-1)*res) - k*y < k) {

        //     res++;

        // }

        // equation
        // 1 + (x-1)*res - k*y - k = 0
        res = (k*y + k - 1)/(x-1);

        if ((k*y + k - 1)%(x-1)!=0) {
            res++;
        }

        // cout << "res: " << res << endl;
        cout << res+k << endl;


    }

    
    return 0;
}