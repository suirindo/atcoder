#include <bits/stdc++.h>
using namespace std;

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



/* ボツ解答
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