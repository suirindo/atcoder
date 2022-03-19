#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/**
例題：
int main(){
    ll N, ans = 0;
    cin >> N;

    //支払い方法のシミュレーション
    while (N >= 10000) { N -= 10000; ans += 1;}
    while (N >= 5000) { N -= 5000; ans += 1;}
    while (N >= 1) { N -= 1000; ans += 1;}
    cout << ans <<endl;
    return 0;
}
**/

ll N;
ll A[100009], B[100009];

int main(){
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    for (int i = 1; i <= N; i++) cin >> B[i];

    sort(A + 1, A + N + 1);
    sort(B + 1, B + N + 1);

    ll ans = 0;
    for (int i = 1; i <= N; i++) ans += abs(A[i] - B[i]);
    cout << ans << endl;
    return 0;
}
