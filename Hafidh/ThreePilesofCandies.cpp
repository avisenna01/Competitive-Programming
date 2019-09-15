#include <bits/stdc++.h>

long long divide(long long a, long long b, long long c) {
    return (a + b + c)/2;
}

int main() {
    int N; 
    long long a, b, c;

    scanf("%d", &N);

    while (N) {
        scanf("%I64d %I64d %I64d", &a, &b, &c);
        printf("%I64d\n", divide(a, b, c));
        N--;
    }
    return 0;
}