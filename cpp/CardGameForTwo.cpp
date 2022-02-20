#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    int a[110];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];

    sort(a, a + N, greater<int>()); // a[0:N]を大きい順にソート
    int Alice = 0;
    int Bob = 0;
    for (int i = 0; i < N; i++){
        if (i % 2 == 0){ // Aliceのターン
            Alice += a[i];
        }
        else {
            Bob += a[i];
        }
    }
    cout << Alice - Bob << endl;
}