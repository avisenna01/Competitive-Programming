#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, i = 0;
    scanf("%I64d %I64d", &a, &b);
    while (a <= b) {
        a *= 3;
        b *= 2;
        i++;
    }
    printf("%I64d\n", i);
}