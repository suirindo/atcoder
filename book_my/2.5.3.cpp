#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll N;
    ll ans = 1;
    cin >> N;
    for (int i = 2; i <= N; i++) ans *= i;
    cout << ans << endl;
    return 0;
}

/*
int main(){
    ll N;
    cin >> N;
    ll x = 0;
    ll ans = 1;

    for(int i = 0; i < N; i++){
        x = N - i;
        ans = ans * x;
    }
    cout << ans << endl;
}
*/