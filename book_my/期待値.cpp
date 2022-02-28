#include <bits/stdc++.h>
using namespace std;

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



/*
// 解法1
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