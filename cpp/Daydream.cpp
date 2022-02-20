#include <bits/stdc++.h>
using namespace std;

string divide[4]  = {"dream", "dreamer", "erase", "eraser"};

int main(){
    string S;
    cin >> S;

    //すべての文字列を左右反転する
    reverse(S.begin(), S.end());
    for (int i = 0; i < 4; i++) reverse(divide[i].begin(), divide[i].end());

    //端から切っていく
    bool can = true;
    for (int i = 0; i < S.size();) {
        bool can2 = false; // 4個の文字列たちどれかでdivideできるか
        for (int j = 0; j < 4; j++){
            string d = divide[j];
            if (S.substr(i, d.size()) == d){ // d でdivideできるか  substr関数＝指定した位置から最後までの部分文字列を取得する方法
                can2 = true;
                i += d.size(); // divideできたら i を進める
            }
        }
        if (!can2) { // divideできなかったら
        can = false;
        break;
        }
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;
}