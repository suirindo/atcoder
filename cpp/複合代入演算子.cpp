#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, a, b ;
    //入力
    cin >> x >> a >> b;

    //1の出力
    x++;
    cout << x << endl;

    //2の出力
    x *= a + b;
    cout << x << endl;

    //3の出力
    x *= x;
    cout << x << endl;

    //4の出力
    x--;
    cout << x << endl;
}