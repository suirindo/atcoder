#include <bits/stdc++.h>
using namespace std;

//サイコロ 夏休みの勉強時間
int N, A[109], B[109];
double ans = 0.0;

int main(){
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i] >> B[i];
    
    for (int i = 1; i <= N; i++){
    double eval = A[i] * (1.0 / 3.0) + B[i] * (2.0 /  3.0);
    ans += eval;
    }
    cout << ans << endl;
    return 0;
}



/*
//テストの点数
int N, P[59], Q[59];
double ans = 0.0;

int main(){
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> P[i] >> Q[i];

    for (int i = 1; i <= N; i++){
        ans += 1.0 * Q[i] / P[i];
    }
    cout << ans << endl;
    return 0;
}
*/

/*
//サイコロ　解法2
int N, B[100009], R[100009];

int main(){
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> B[i];
    for (int i = 1; i <= N; i++) cin >> R[i];

    //答えの計算 答えの出力
    double Blue = 0.0, Red = 0.0;
    for (int i = 1; i <= N; i++){
        Blue += 1.0 * B[i] / N;
        Red += 1.0 * R[i] / N;
    }
    cout << Blue + Red << endl;
    return 0;
 }
*/


/*
// サイコロ　解法1
int main(){
    int N;
    cin >> N;
    int B[100009];
    int R[100009];

    int cntB = 0;
    int cntR = 0; 

    for (int i = 1; i <= N; i++){
        cin >> B[i];
        cntB += B[i];
    }
    for (int i = 1; i <= N; i++){
        cin >> R[i];
        cntR += R[i];
    }
    cout << cntB / N + cntR / N << endl; 
    
    return 0;
}
*/