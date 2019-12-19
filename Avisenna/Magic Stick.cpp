#include <bits/stdc++.h>

using namespace std;

string det(int x, int y){
    if (x>=y) {return "YES";}
    else if (((x==3) || (x==2)) && (y>3)) {return "NO";}
    else if (x==1) return "NO";
    else return "YES";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    int x,y;

    for (int i=0; i<n; i++){
        cin >> x >> y;
        cout <<  det(x,y) << endl;
    }

    return 0;
}