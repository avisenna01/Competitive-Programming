// https://codeforces.com/problemset/problem/1191/A

#include <bits/stdc++.h>

using namespace std;

int x,a;
char b;

int main() {

    scanf("%d",&x);

    if (x%4==0) {
        cout << 1 << " " << "A" << endl;
    }
    else if (x%4==1) {
        cout << 0 << " " << "A" << endl;
    }
    else if (x%4==2) {
        cout << 1 << " " << "B" << endl;
    }
    else {
        cout << 2 << " " << "A" << endl;
    }

    
    return 0;
}