#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;
// vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値))
    vector<vector<ll>> a(n, vector<ll>(m)); //(n,m)の２次元配列を宣言
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

ll res = 0; // 制約より負の得点はないので0で初期化
for(int first = 0; first < m; ++first){
    for(int second = 0; second < m; ++second) {
        ll sum = 0; //得点の合計、0で初期化

        for(int i = 0; i < n; ++i){
            sum += max(a[i][first], a[i][second]); // ２つの曲の点数のうち高い方をそのまま実装
        }
        res = max(res, sum);
    }
}

cout << res << endl;

return 0;

}