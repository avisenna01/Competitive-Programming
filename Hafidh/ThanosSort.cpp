/**
 * Link : http://codeforces.com/problemset/problem/1145/A
 */
#include<bits/stdc++.h>
using namespace std;

int snap(vector<int>::iterator begin, vector<int>::iterator end) {
    int x, y, vector_len;
    vector_len = end - begin;
    if (is_sorted(begin, end) || vector_len == 1) {
        return vector_len;
    } else {
        x = snap(begin, begin + vector_len/2);
        y = snap(begin + vector_len/2, end);
        if (x >= y) {
            return x;
        } else {
            return y;
        }
    }
}

int main() {
    vector<int> populus;
    int N;

    scanf("%d", &N);

    int x;
    for (int i = 0; i < N; i++) {
        scanf("%d", &x);
        populus.push_back(x);
    }

    printf("%d\n", snap(populus.begin(), populus.end()));

    return 0;

    int size = populus.end() - populus.begin(); 
    for (vector<int>::iterator i = populus.begin() + size/2; i != populus.end(); i++) {
        cout << *i << endl;
    }

}