#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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