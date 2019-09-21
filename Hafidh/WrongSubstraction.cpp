#include<bits/stdc++.h>

int sub(int x);

int main() {
    int x, k;

    scanf("%d %d", &x, &k);

    for (int i = 0; i <  k; i++) {
        x = sub(x);
    }

    printf("%d", x);

    return 0;
}

int sub(int x) {
    if (x % 10) {
        x--;
    } else {
        x /= 10;
    }
    return x;
}