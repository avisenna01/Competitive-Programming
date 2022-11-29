// https://codeforces.com/problemset/problem/214/A
#include <bits/stdc++.h>

using namespace std;

int m,n;

int main() {

    int count=0;

    scanf("%d %d",&n,&m);
    int eq1=0,eq2=0,a=0,b=0;
    while (((a*a+b)<=n) && ((b*b+a)<=m)) {
        while ((a*a+b <= n)&& (b*b+a <=m) ) {
            if ((a*a+b==n) && (b*b+a==m)) {count++;}
            a++;
        }
        b++;
        a=0;
    }

    printf("%d\n",count);

    return 0;
}