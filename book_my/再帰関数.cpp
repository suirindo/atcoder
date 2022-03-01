#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll func( ll N){
    if ( N == 1) return 1; //ベースケース
    return func(N - 1) * N;
}

int main(){
    ll N;
    cin >> N;
    cout << func(N) << endl;
    return 0;
}