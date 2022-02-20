#include <bits/stdc++.h>
using namespace std;

// std::setを用いた解
#include <set>

int main(){
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> d[i];

    set<int> values; // insertするときに重複を取り除いてくれる
    for (int i = 0; i < N; i++){
        values.insert(d[i]);
    }
    // setのサイズを出力
    cout << values.size() << endl;
}

/*
// バケット法による解
int main(){
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> d[i];

    int num[110]  = {0}; // バケット
    for (int i = 0; i < N; i++){
        num[d[i]]++; // d[i]が１個増える
    }

    int res = 0; // 答えを格納
    for (int i = 1; i <= 100; i++){ // 1から100まで探索
        if (num[i]) { // 1より大きかったら
            res++;
        }
    }
    cout << res << endl;
}

*/