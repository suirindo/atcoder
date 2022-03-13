#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, K, X[59], Y[59];
ll ans = (1LL << 62); //ありえない値に初期値を設定

int check_numpoints(int lx, int rx, int ly, int ry) {
    int cnt = 0;
    for (int i = 1; i <= N; i++){
        // 点(X[i], Y[i])が長方形に含まれているかどうかを判定する
        if (lx <= X[i] && X[i] <= rx && ly <= Y[i] && Y[i] <= ry) cnt++;
    }
    return cnt;
}

int main(){
    // 入力
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> X[i] >> Y[i];

    // 左端x,右端x,下端y,上端yを全探索(それぞれの番号がi,j,k,l)
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            for (int k = 1; k <= N; k++){
                for (int l = 1; l <= N; l++){
                    int cl = X[i]; 
                    int cr = X[j];
                    int dl = Y[k];
                    int dr = Y[l];
                    if (check_numpoints(cl, cr, dl, dr) >= K){
                        ll area = 1LL * (cr - cl) * (dr - dl);
                        ans = min(ans, area);
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}