//ABC240 C
//動的計画法の活用

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
//using P = pair<int, int>;



int main() {
  int n, X;
  cin >> n >> X;
  vector<int> a, b;
  a = vector<int>(n);
  b = vector<int>(n);
  rep(i,n) cin >> a[i] >> b[i];

  vector dp(n+1, vector<bool>(X+101, false));
  dp[0][0] = true;
  rep(i,n) {
    rep(x,X+1) {
      if (dp[i][x]) {
        dp[i+1][x+a[i]] = true;
        dp[i+1][x+b[i]] = true;
      }
    }
  }

  if (dp[n][X]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}






/*
int n, X;
vector<int> a, b;
map<P, bool> memo;
bool f(int i, int x){
    if( i == n ) return x == X;
    P arg(i, x);
    if (memo.count(arg)) return memo[arg];
    bool res = false;
    if (f(i+1, x+a[i]) || f(i + 1, x + b[i])) res = true;
    return memo[arg] = res;
}

int main(){
    cin >> n >> X;
    a = vector<int>(n);
    b = vector<int>(n);
    rep(i, n) cin >> a[i] >> b[i];
    if (f(0, 0)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}






int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    vector dp(n + 1, vector(x + 1, false));
    dp[0][0] = true;
    for (int i =0; i < n; i++){
        for (int j = 0; j <= x; j++){
            if (dp[i][j]){
                if (j + a[i] <= x) {
                    dp[i + 1][j + a[i]] = true;
                }
                if (j + b[i] <= x){
                    dp[i + 1][j + b[i]] = true;
                }
            }
        }
    }
    cout << (dp[n][x] ? "Yes" : "No") << endl;
}

*/