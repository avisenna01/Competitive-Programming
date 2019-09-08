// https://codeforces.com/problemset/problem/1189/A
#include <bits/stdc++.h>

using namespace std;

int n,o=0,l=0;
string s;

int main() {

    scanf("%d",&n);
    cin >> s;

    for (int i=0; i<n; i++){
        if (s[i]=='0') { // kalau pake "" ada warning dan error. Trus kalo pake "" di rekomendasiin buat pake strcmp.
            o++;
        }
        else {
            l++;
        }
    }

    if (o==l){
        char res1=s[0];
        string res2="";
        for (int i=1; i<n; i++){
            res2=res2+s[i];
        }
        cout << 2 << endl;
        cout << res1 << " " << res2 << endl;
    }
    else {
        cout << 1 << endl;
        cout << s << endl;
    }

    return 0;
}