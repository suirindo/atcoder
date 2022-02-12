#include <bits/stdc++.h>
using namespace std;

//文字列
int main(){
        string S;
        cin >> S;

        int answer = 1;

        for (int i = 0; i < S.size(); i++){
            if(S.at(i) == '+'){
                answer++;
            }
            if(S.at(i) == '-'){
                answer--;
            }
        }
        cout << answer << endl;
    }

    // string str1, str2;
    // cin >> str1;
    // str2 = ", world!";

    // cout << str1 << str2 << endl;

    //    string str = "Hello";
    // //    cout << str.size() << endl;
    // cout << str.at(0) << endl;
    // cout << str.at(4) << endl;
    // char c = 'a';
    // cout << c << endl;

    // string str = "Hello";

    // str.at(0) = 'M';
    // cout << str << endl;

    // if (str.at(1) == 'e'){
    //     cout << "Atcoder" << endl;
    // }

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