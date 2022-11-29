//https://codeforces.com/problemset/problem/1350/A
#include <bits/stdc++.h>

using namespace std;

int t;

int isPrime(int n)
{
    int sr = pow(n, 0.5); // sqrt() can be used too
    for (int i = 2; i <= sr; i++)
    {
        if (n % i == 0)
            return i;
    }

    return 1;
}

int op(int n, int k)
{
    if (n % 2 == 0)
    {
        n += 2 * k;
    }
    else if (isPrime(n) == 1)
    {
        n = n * 2 + 2 * (k - 1);
    }
    else
    {
        n += isPrime(n) + 2 * (k - 1);
    }

    return n;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;
    int n, k;

    for (int i = 0; i < t; i++)
    {
        cin >> n >> k;
        cout << op(n, k) << endl;
    }

    return 0;
}