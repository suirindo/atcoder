#include <bits/stdc++.h>
using namespace std;
#define rep(i, N) for (int i = 1; i <= (N); ++i)

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
            int v2 = dp[i - 2] + abs(H[i - 2] - H[i]); // 1個前の足場からジャンプする時
            dp[i] = min(v1, v2);
        }
  }
  cout << dp[N] << endl;
  return 0;
}