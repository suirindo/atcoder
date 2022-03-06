#include <bits/stdc++.h>
using namespace std;

// 文字列Sの各文字を昇順に並び替えて出力せよ

int main(){
    string S; cin >> S;
    sort(S.begin(), S.end());
    cout << S <<endl;
}