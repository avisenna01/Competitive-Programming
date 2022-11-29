#include <bits/stdc++.h>

using namespace std;

string langDet(string a){
    int len = a.size();
    if (a[len-1]=='o') return "FILIPINO";
    else if (a[len-1]=='u') return "JAPANESE";
    else  return "KOREAN";
}

int main(){

    string inp;
    int n;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> inp;
        cout << langDet(inp) << endl;
    }

    return 0;
}