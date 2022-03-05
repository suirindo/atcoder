#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//3.7.6
ll N, A[500009];
ll dp1[500009], dp2[500009];

int main(){
    //入力
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i];

    //配列の初期化
    dp1[0] = 0;
    dp2[0] = 0;

    //dp
    for (int i = 1; i <= N; i++){
        dp1[i] = dp2[i - 1] + A[i];
        dp2[i] = max(dp1[i-1], dp2[i-1]);
    }

    cout << max(dp1[N], dp2[N]) << endl;
    return 0;
}





/*
// 部分和問題。ナップザック問題を応用して解く。
// N:カードの枚数 S:合計値 A:カードに書かれた数
int N, S, A[69];
bool dp[69][10009];

int main(){
    // 入力
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // 配列の初期化
    dp[0][0] = true;
    for (int i = 0; i <= S; i++) dp[0][i] = false;

    // dp
    for (int i = 1; i <= N; i++){
        for (int j = 0; j <= S; j++){
            // j < A[i]のとき、カードiは選べない
            if(j < A[i]) dp[i][j] = dp[i-1][j];
            // j >= A[i]のとき、選ぶ/選ばない 両方の選択肢がある
            if(j >= A[i]){
                if(dp[i-1][j] == true || dp[i-1][j-A[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }
    //出力
    if(dp[N][S] == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

*/