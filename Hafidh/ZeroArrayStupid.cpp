#include <bits/stdc++.h>
// #include <queue>

int main() {
    int N; 
    long long sum, max, x, res;

    scanf("%d", &N);

    sum = 0;
    max = 0;
    for (int i = 0; i < N; i++) {
        scanf("%I64d", &x);
        sum += x;
        if (x > max) {
            max = x;
        }
    }
    res = sum - max;

    if ((max <= res) && !(sum % 2)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
