// https://codeforces.com/problemset/problem/1208/A
#include <bits/stdc++.h>
// caranya hafid bener
using namespace std;

int t;
vector<int> finres;

int main() {

    scanf("%d",&t);

    int inp,a,b,n;
    int res;
    for (int i=0; i<t; i++) {
        scanf("%d %d %d",&a,&b,&n);
        // res = (a)^(b);
        // cout << res<< endl;
        finres.push_back(res);
    }

    int len=finres.size();
    for (int i=0; i<len; i++) {
        printf("%d\n",finres[i]);
    }

    return 0;

}