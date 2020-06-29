// Search Engine

#include <bits/stdc++.h>

using namespace std;

int t;
vector<string> nv;
// vector<int> res;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // gennady used 0 instead of NULL

    cin >> t;

    int n,q,count,len,found;

    for (int i=0; i<t; i++){
         cout << "Case "<< i+1 << ":"<< endl;
        cin >> n >> q;
        for (int j=0; j<n; j++){
            cin >> ws;

            string str;
            getline(cin, str);

            nv.push_back(str);
        }
        for (int j=0; j<q; j++){

            cin >> ws;
            string str;
            getline(cin, str);

            count=0;
            len=nv.size();
            for (int k=0; k<len; k++){
                found = nv[k].find(str);
                if ((found<nv[k].length()) && (found>=0) && ((isspace(nv[k][found+str.length()])) ||  (found+str.length()==nv[k].length()))){
                    count++;
                }
            }
            // res.push_back(count);
            cout << count << endl;
        }
        // cout << "Case "<< i+1 << ":"<< endl;
        // len=res.size();
        // for (int j=0; j<len; j++){
        //     cout << res[j]<< endl;
        // }
        nv.clear();
        // res.clear();

    }

    return 0;
}