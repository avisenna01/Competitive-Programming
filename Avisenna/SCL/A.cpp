#include <bits/stdc++.h>

using namespace std;

int t;
vector<string> nv;
vector<int> res;
// vector<string> qv;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); // gennady used 0 instead of NULL

    cin >> t;

    int n,q,count,len,found;
    // string str;

    for (int i=0; i<t; i++){
        cin >> n >> q;
        for (int j=0; j<n; j++){
            cin >> ws;

            // cin >> str;
            // gets(str);
            string str;
            getline(cin, str);
            // cout << str << endl;

            nv.push_back(str);
        }
        // for (int j=0; j< nv.size(); j++){
        //     cout << nv[j]<< endl;
        // }
        for (int j=0; j<q; j++){

            cin >> ws;
            string str;
            getline(cin, str);
            // cout << str.length()<< endl;
            // cout << "XXX" << endl;
            // cout << str << endl;
            // cout << str.length()<< endl;
            // cin >> str;
            // gets(str);
            // qv.push_back(str)

            count=0;
            len=nv.size();
            for (int k=0; k<len; k++){
                found = nv[k].find(str);
                // found = distance(found);
                // cout << found << endl;
                // || (nv[k][found+str.length()]=='\n'))
                // && nv[k].length()>found+str.length()?
                if ((found<nv[k].length()) && (found>=0) && ((isspace(nv[k][found+str.length()])) ||  (found+str.length()==nv[k].length()))){
                    // if (found>0){
                    count++;
                    // cout << count << endl;
                    // cout <<
                    // cout << "ini" << count << endl;
                }
                // cout << "ini2" << count << endl;
            }
            // cout << "jumlah count" << count << endl;
            res.push_back(count);
        }
        cout << "Case "<< i+1 << ":"<< endl;
        len=res.size();
        for (int j=0; j<len; j++){
            cout << res[j]<< endl;
        }
        nv.clear();
        res.clear();

    }

    return 0;
}