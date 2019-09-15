#include <cstdio>

int XORinacci(int a, int b, long n) {
    if (n % 3 == 0) {
        return a;
    } else if (n % 3 == 1) {
        return b;
    } else if (n % 3 == 2) {
        return a ^ b;
    }
}

int main() {
    int N, a, b, n;
    scanf("%d", &N);
    while (N) {
        scanf("%d %d %d", &a, &b, &n);
        printf("%ld\n", XORinacci(a, b, n));
        N--;
    }
    return 0;
}