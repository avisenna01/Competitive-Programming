#include <bits/stdc++.h>

using namespace std;

char change(char &c){
    if (c=='W'){
        c='B';
    }
    else {
        c='W';
    }
}

int main(){

    int len,b,w;
    cin >> len;
    string s;
    cin >> s;

    len = s.size();

    for (int i=0; i<len; i++){
        if (s[i]=='W') w++;
        else b++;
    }

    char first = s[0];
    int res = -1; // assign default res value

    if (b%2==0){ 
        for (int i=0; i<len-1; i++){
            
        }
    }
    else if (w%2==0){

    }
    else{

    }

    cout << res << endl;

    if (res!=-1){

    }

    return 0;
}