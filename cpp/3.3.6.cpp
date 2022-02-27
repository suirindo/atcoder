#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, A[200009];
ll cnt[100009];
ll ans = 0;

int main(){
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];
    
    for (int i = 1; i <= 99999; i++) cnt[i] = 0;
    for (int i = 1; i <= N; i++) cnt[A[i]] += 1;

    for (int i = 1; i <= 49999; i++) {
        ans += cnt[i] * cnt[100000 - i];
    }
    ans += cnt[50000] * (cnt[50000] - 1) / 2;
    
    cout << ans << endl;
    return 0;
}