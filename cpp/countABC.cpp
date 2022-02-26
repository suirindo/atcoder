#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    string S;
    cin >> N;
    cin >> S;

    int cnt = 0;

    for ( int i = 0; i < S.size(); i++){
        if (S.at(i) == 'A'){
            if ( S.at(i + 1) == 'B' && S.at(i + 2) == 'C'){
                cnt++;
            }
        }
    }
    cout << cnt << endl;

}



    // ループ構文との組み合わせ
        // string str;
        // cin >> str;

        // int count = 0;
        // for (int i = 0; i < str.size(); i++){
        //     if (str.at(i) == '0'){
        //         count++;
        //     }
        // }
        // cout << count << endl;