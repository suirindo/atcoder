#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll GCD(ll A, ll B){
    while (A >= 1 && B >= 1){
        if ( A < B) B = B % A;
        else A = A % B;
    }
    if ( A >= 1) return A;
    return B;
}

// LCM = LeastCommonMultiple
ll LCM(ll A, ll B) {
    return ( A / GCD(A, B) * B);
}

ll N;
ll A[100009];

int main(){
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    //答えを求める
    ll R = LCM(A[1], A[2]);
    for (int i = 3; i <= N; i++){
        R = LCM(R, A[i]);
    }
    // 出力
    cout << R << endl;
    return 0;
}


/*
// GCD = Greatest Common Divisor

ll GCD(ll A, ll B){
    while (A >= 1 && B >= 1){
        if ( A < B) B = B % A;
        else A = A % B;
    }
    if ( A >= 1) return A;
    return B;
}

ll N;
ll A[100009];

int main(){
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // 答えを求める
    ll R = GCD(A[1], A[2]);
    for (int i = 3; i <= N; i++) {
        R = GCD(R, A[i]);
    }
    // 出力
    cout << R << endl;
    return 0;
}

*/

// int main(){
//     ll A, B;
//     cin >> A >> B;
//     cout << GCD(A, B) << endl;
// }

