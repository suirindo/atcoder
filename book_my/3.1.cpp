#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll N;
    cin >> N;

    //素因数分解・出力
    for (ll i = 2; i * i <= N; i++){
        while (N % i == 0){
            N /= i;
            cout << i << endl;
        }
    }
    if (N >= 2) cout << N << endl;
    return 0;
}