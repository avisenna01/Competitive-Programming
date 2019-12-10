// https://codeforces.com/problemset/problem/1213/B
#include <bits/stdc++.h>

using namespace std;

int t;

int main() {

    scanf("%d",&t);

    int n,inp,count=0; 
    
    priority_queue<int> pq;

    for (int i=0; i<t; i++) {
        scanf("%d",&n);
        for (int j=0; j<n; j++) {
            scanf("%d",&inp);
            if ((inp>=pq.top()) && (!(pq.empty()))) {
                pq.pop();
                pq.push(inp);
                count++;
            }
            else if (pq.empty()) {pq.push(inp); count++;}
        }
        cout << n-count << endl;
        pq.pop();
     }

    return 0;
}