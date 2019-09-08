#include <bits/stdc++.h>
// #include <iostream>
// #include <stdio.h>
// #include <cstring>
// #include <string>

using namespace std;

int main()
{
    int i, j;
    char str1[50];

    strcpy(str1, "Tes #4 : 5");
    sscanf(str1, "Tes # %d  :%d", &i, &j);

    cout << str1 << " patapon " << endl;

    cout << i << " "<< j << endl;

    i=4; i=5;

    sprintf(str1, "Jawab: %d", i);

    cout << str1 << " pepega " << endl;

    return 0;
}