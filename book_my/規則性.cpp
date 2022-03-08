#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


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
