#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 1; i <= (N); ++i)
#define repB(i, N) for (int i = 0; i <= (N); ++i)
typedef long long ll;

ll N, W, w[109], v[109];
ll dp[109][100009];

int main(){
    ///入力
    cin >> N >> W;
    for (int i = 1; i <= N; i++) cin >> w[i] >> v[i];

    //配列の初期化
    dp[0][0] = 0;
    for (int i = 0; i <= W; i++) dp[0][1] = -(1LL << 60);

    // dp
    for (int i = 1; i <= N; i++){
        for (int j = 0; j <= W; j++){
            //場合分け
            // j<w[i]のとき、方法Bをとる選び方ができない
            if(j < w[i]) dp[i][j] = dp[i - 1][j];
            // j>=w[i]のとき、方法A・Bのどちらも選べる
            if(j >= w[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i] + v[i]]);
        }
    }
    //出力
    ll ans  = 0;
    for(int i = 0; i <= W; i++) ans = max(ans, dp[N][i]);
    cout << ans << endl;
    return 0;
}

/*
int N , dp[54];

int main(){
    cin >> N;

    //dp → 答えの出力
    repB(i, N){
        if (i <= 1) dp[i] = 1;
        else dp[i] = dp[i -1] + dp[i - 2];
    }
    cout << dp[N] << endl;
    return 0;
}

*/

/*
int N, H[100009], dp[100009];
int main(){
    //入力
    cin >> N;
    rep(i, N) cin >> H[i];
    // dp → 答えの出力
    rep(i, N){
        if (i == 1) dp[i] = 0;
        if (i == 2) dp[i] = abs(H[i - 1] - H[i]);
        if ( i >= 3) {
            int v1 = dp[i - 1] + abs(H[i - 1] - H[i]); // 1個前の足場からジャンプする時
            int v2 = dp[i - 2] + abs(H[i - 2] - H[i]); 
            dp[i] = min(v1, v2);
        }
  }
  cout << dp[N] << endl;
  return 0;
}
*/