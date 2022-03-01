#include <bits/stdc++.h>
using namespace std;

int main(){
    int N = 1000000;
    int M = 0;

    for (int i = 1; i <= N; i++){
        //rand関数で生成した乱数を乱数の最大値の定数「RAND_MAX」で割った値を使って、0〜1の数値を出力します。
        double px = 6.0 * rand() / (double)RAND_MAX;
        double py = 9.0 * rand() / (double)RAND_MAX;

        //点（3,3）との距離。この値が３以下であれば半径3の円に含まれる。
        double dist_33 = sqrt((px - 3.0) * (px - 3.0) + (py - 3.0) * (py - 3.0));
        //点（3,7)との距離・この値が2以下であれば半径2の円に含まれる。
        double dist_37 = sqrt((px - 3.0) * (px - 3.0) + (py - 7.0) * (py - 7.0));

        //条件分岐
        if (dist_33 <= 3.0 || dist_37 <= 2.0) M += 1;
    }
    cout << M << endl;
    return 0;
}