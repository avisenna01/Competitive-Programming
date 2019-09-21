#include <bits/stdc++.h>

int main() {
    int N, x;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        if (x) {
            printf("HARD\n");
            return 0;
        }
    }

    printf("EASY\n");
    return 0;

    return 0;
}