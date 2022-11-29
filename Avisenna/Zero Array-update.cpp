#include <bits/stdc++.h>

using namespace std;

int n;
priority_queue<long long> pq;

int main() {

    scanf("%d",&n);

    long long inp,sum=0;

    for (int i=0; i<n; i++) {
        scanf("%I64d",&inp);
        sum+=inp;
        pq.push(inp);
    }
    long long res,big_el;
    big_el=pq.top();
    res=sum-big_el;

    if ((big_el<=res && sum%2==0)) printf("YES\n");
    else printf("NO\n");

    return 0;
}