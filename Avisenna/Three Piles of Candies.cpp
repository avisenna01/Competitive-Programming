// https://codeforces.com/problemset/problem/1196/A
#include <bits/stdc++.h>

using namespace std;

int q;
vector<long long int> ans;

int main() {

    scanf("%d",&q);

    for (int i=0; i<q; i++){
        long long int pile1,pile2,pile3;
        scanf("%I64d %I64d %I64d", &pile1, &pile2, &pile3);
        long long int res=pile1+pile2+pile3;
        res/=2;
        ans.push_back(res);
    }

    int len=ans.size();
    for (int i=0; i<len; i++) {
        cout << ans[i]<< endl;
    }

    return 0;
}