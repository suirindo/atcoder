#include <bits/stdc++.h>
using namespace std;

int N, A[109];
int ans = 0;

int main(){
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++){
        cin >> A[i];
    }
    // 答えの計算
    for(int i = 1; i <= N; i++){
        ans += A[i];
    }

    cout << ans % 100 << endl;
    return 0;
}