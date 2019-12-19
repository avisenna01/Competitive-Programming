#include <bits/stdc++.h>

using namespace std;

int cost(int c, int sum){
    int a = ceil(sum*1.0/c);
    int res=0;
    if (c>=sum){
        return sum;
    }
    else if (c*a==sum) {
        for (int i=0; i<c; i++){
            // sepertinya terjadi permasalahan ketikan assign hasil int*int ke long, jadinya resnya int
            res += pow(a,2);
        }
        return res;
    }
    else{
        int a=sum/c;
        int b=sum%c;

        for (int i=1; i<=c; i++){
            if (i<=c-b){
                res += pow(a,2);
            }
            else {
                res += pow(a+1,2);
            }
        }

        return res;
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int c,sum,n;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> c >> sum;
        cout << cost(c,sum) << endl;
    }

    return 0;
}