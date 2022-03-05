#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 三角関数を用いて時計の針の角度を求める問題
const double PI = 3.14159265358979;

int main(){
    //入力
    double A, B, H, M;
    cin >> A >> B >> H >> M;

    //座標を求める
    double AngleH = 30.0 * H + 0.5 * M;
    double AngleM = 6.0 * M;
    double Hx = A * cos(AngleH * PI / 180.0), Hy = A * sin(AngleH * PI / 180.0);
    double Mx = B * cos(AngleM * PI / 180.0), My = B * sin(AngleM * PI / 180.0);

    //距離を求める
    double d = sqrt((Hx - Mx) * (Hx - Mx) + (Hy - My) * (Hy - My));
    printf("%.12lf¥n", d);
    return 0;
}


/*
// 4.1.3 2つの円と2点間距離
double x1, Y1, r1;
double x2, Y2, r2;

int main(){
    cin >> x1 >> Y1 >> r1;
    cin >> x2 >> Y2 >> r2;

    // 円の中心間距離を求める
    double d = sqrt((x1 - x2) * (x1 - x2) + (Y1 - Y2) * (Y1 - Y2));

    // 答えを出力
    if(d < abs(r1 - r2)) cout << "1" << endl;
    else if(d == abs(r1 - r2)) cout << "2" << endl;
    else if(d < r1 + r2) cout << "3" << endl;
    else if(d == r1 + r2) cout << "4" << endl;
    else cout << "5" << endl;
    return 0;
}
*/

/*
// 最近点対問題の全探索
int N;
double x[2009], y[2009];
double ans = 1000000000.0; //非常に大きい値に初期化

int main(){
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> x[i] >> y[i];

    // 全探索
    for(int i = 1; i <= N; i++){
        for (int j = i + 1; j <= N; j++){
            double dist = sqrt((x[i]-x[j]) * (x[i]-x[j]) + (y[i]- y[j]) * (y[i]- y[j]));
            ans = min(ans, dist);
        }
    }

    //出力
    cout << ans << endl;
    return 0;
}
*/


/*
//点と線分の距離を求める
int main(){
    ll ax, ay, bx, by, cx, cy;
    cin >> ax, ay, bx, by, cx, cy;

    // ベクトル BA, BC, CA, CBの成分表示を求める
    ll BAx = (ax - bx), BAy = (ay - ay);
    ll BCx = (cx - bx), BCy = (cy - by);
    ll CAx = (ax - cx), CAy = (cy - ay);
    ll CBx = (bx - cx), CBy = (by - cy);

    // どのパターンに当てはまるかを判定する
    int pattern = 2;
    if (BAx * BCx + BAy * BCy < 0LL)pattern = 1;
    if (CAx * CBx + CAy * CAy < 0LL)pattern = 3;

    // 点と直線の距離を求める
    double ans = 0.0;
    if(pattern == 1) ans = sqrt(BAx * BAx + BAy * BAy);
    if(pattern == 3) ans = sqrt(CAx * CAx + CAy * CAy);
    if(pattern == 2){
        double S = abs(BAx * CAy - BAy * CAx);
        double BCLength = sqrt(BCx * BCx + BCy * BCy);
        ans = S / BCLength;
    }
    cout << ans << endl;
    return 0;
}
*/