// https://codeforces.com/problemset/problem/1213/A
#include <bits/stdc++.h>

using namespace std;

int n,odd=0,even=0;

int main() {

    scanf("%d",&n);
    int temp;
    for (int i=0; i<n; i++) {
        scanf("%d",&temp);
        if (temp%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if (odd>=even) cout << even << endl;
    else cout << odd << endl;

    return 0;
}