#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    set<int> s;
    rep(i, n) s.insert(a[i]);
    cout << s.size() << endl;
    return 0;
 
}


/*
// 解法1
// aに現れる整数を順番に見ていき、「それが初めて登場した整数なら答えに1を足す」ことを繰り返せばよい
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) {
        cin >> x;
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        bool appeared = false;
        for (int j = 0; j < i; j++){
            if (a[i] == a[j]) {
                appeared = true;
            }
        }
        if (!appeared) {
            ans += 1;
        }
    }
    cout << ans << endl;
}

// 解法2
// （重複のない）集合を管理するデータ構造を用いて解くことができる。C++ではstd::setを用いることができる。

#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        a.insert(x);
        cout << a.size() << endl;
    }
}

// 解法3
//a を昇順に並べ替えると、等しい要素は隣り合わせになります。 並べ替えた後の数列において、
//ai != ai + 1となる i の個数に 1 を足した値が答えとなります。

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a){
        cin >> x;
    }
    sort(begin(a), end(a));
    int ans = 1;
    for (int i = 0; i < n - 1; i++){
        if (a[i] != a[i + 1]) {
            ans += 1;
        }
    }
    cout << ans << endl;
 }


// ボツ解答
int main(){
    int N;
    int d[1100];

    cin >> N;
    for (int i = 0; i < N; i++) cin >> d[i];

    int num[100] = {0};
    for (int i = 0; i < N; i++){
        num[d[i]]++;
    }
    int res = 0; 
    for (int i = 1; i <= 1000; i++){ 
        if (num[i]) { 
            res++;
        }
    }
    cout << res - 1 << endl;
}
*/