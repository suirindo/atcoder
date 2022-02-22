#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ans = 0;
    for (int C = 1; C <= N; C += 2){
        int num_of_divisors = 0; // divisors = 約数
        for (int X = 1; X <= C; ++X){
            if (C % X == 0){
                ++num_of_divisors;
            }
        }
        if (num_of_divisors == 8){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}


/*
■ Nの約数を全列挙するアルゴリズム

??整数Nの約数とは??
    整数Nを割り切ることができる整数またはその集合　のこと
    単純なアルゴリズムでは約数の全列挙にO(N)だけかかるが、
    約数の性質を活かすとO(√N)で全列挙することができる

単純なアルゴリズム：
    1からNまで以下を繰り返す
        Nを割り切れたら約数として保存する
        （1からNまでを全探索して、すべての約数を列挙する

vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(n / i);
        }
    }
    return ret;
}

効率的なアルゴリズム：
    d = 1 から  ⌊√𝑁⌋ まで以下を繰り返す
        Nを割り切れたら、d と N/d を約数として保存する
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i  i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}

*/