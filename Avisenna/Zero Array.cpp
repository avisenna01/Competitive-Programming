// https://codeforces.com/problemset/problem/1201/B
#include <bits/stdc++.h>

using namespace std;

int n;
priority_queue<int> pq;

int main() {
    int inp;
    
    scanf("%d",&n);
    for (int i=0; i<n; i++) {
        scanf("%d",&inp);
        pq.push(inp);
    }

    int top1,top2;
    int x=pq.top(); pq.pop();
    int y=pq.top(); pq.push(x);

    while (y > 0) {
        // cout<< pq.top() << endl;
        top1=pq.top();
        pq.pop();
        top2=pq.top();      
        pq.pop();
        top1-=1;top2-=1;
        pq.push(top1); pq.push(top2);
        x=pq.top(); pq.pop();
        y=pq.top(); 
        pq.push(x);
        // cout << "::::::::::" << endl;
        // cout << x << endl;
        // cout << y << endl;
        // cout << "@@@@@@@@@@" << endl;
        // cout << pq.top() << endl;
    }

    // int bol=1;

    // while (!pq.empty()) {
    //     if (pq.top()!=0) bol=0;
    //     pq.pop();
    // }

    // cout << pq.top() << endl;
    if (x==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}