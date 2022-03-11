#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//N個の石 勝負
int main(){
    ll N;
    cin >> N;

    // N = 2^k - 1 の形で表されるかどうかを調べる
    bool flag = false;
    for ( int k = 1; k <= 60; k++){
        if (N == (1LL << k) - 1LL) flag = true; // 2^k - 1であるかどうか
    }

    if(flag == true) cout << "Second" << endl;
    else cout <<"First" << endl;
    return 0;

}



/*
// 2のN乗の一の位を求める
int main(){
    ll N;
    cin >> N;

    if (N % 4 == 1) cout << "2" << endl;
    if (N % 4 == 2) cout << "4" << endl;
    if (N % 4 == 3) cout << "8" << endl;
    if (N % 4 == 0) cout << "6" << endl;
    return 0;
}
/*