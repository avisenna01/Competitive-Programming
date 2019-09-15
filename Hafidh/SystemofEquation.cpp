#include <bits/stdc++.h>

int main() {
    int a, b, n, m, count = 0;

    a = 0;
    b = 0;
    scanf("%d %d", &n, &m);
    while ((a*a + b <= n) && (a + b*b <= m)) {
        while ((a*a + b <= n) && (a + b*b <= m)) {
            if ((a*a + b == n) && (a + b*b == m)) {
                count += 1;
            }
            b += 1;
        }
        b = 0;
        a += 1;
    }

    printf("%d", count);
    return 0;
}