#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C; // 金額
    int X, Y; // 必要なピザの枚数
    cin >> A >> B >> C >> X >> Y;

    // シンプルなA,Bピザを必要枚数分だけ購入した際の金額
    int min_cost = A * X + B * Y;
    // Z = Cピザ(AとBを半分ずつ持ったピザ)の枚数とする
    // Zの枚数を必要と想定される最大限の枚数分、繰り返し計算し、最安値を求める
    for (int Z = 0; Z <= 2 * max(X, Y); ++Z){
        int cost = A * max(0, X - Z / 2) + B * max(0, Y - Z / 2) + C * Z;
        // シンプルな合計金額とCピザを組み込んだ合計金額とを比較している
        if (min_cost > cost)
            min_cost = cost;
    }
    cout << min_cost << endl;
}