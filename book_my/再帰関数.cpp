#include <bits/stdc++.h>
using namespace std;

//分割統治法
int N, A[109];

int solve(int l, int r){
    if (r - l == 1) return A[l];
    int m = (l + r) / 2; // 区間 [l, r) の中央で分割する
    int s1 = solve(l, m); // s1 はA[l] + ... + A[m-1]の合計値となる
    int s2 = solve(m, r); // s2 はA[m] + ... + A[r-1]の合計値となる
    return s1 + s2;
}

int main(){
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    //再帰呼び出し
    int ans = solve(1, N + 1);
    cout << ans << endl;
    return 0;
}



// ll func( ll N){
//     if ( N == 1) return 1; //ベースケース
//     return func(N - 1) * N;
// }

// int main(){
//     ll N;
//     cin >> N;
//     cout << func(N) << endl;
//     return 0;
// }