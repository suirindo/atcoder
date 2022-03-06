#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//コンビニ
int N, T;
int L[500009], R[500009];
int A[500009], B[500009];

int main(){
    cin >> T >> N;
    for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

    //階差B[i]を計算する
    for (int i = 0; i <= T; i++) B[i] = 0;
    for (int i = 1; i <= N; i++) {
        B[L[i]] += 1;
        B[R[i]] -= 1;
    }

    //累積和A[i]を計算する
    A[0] = B[0];
    for (int i = 1; i <= T; i++){
        A[i] - A[i - 1] + B[i];
    }

    for(int i = 0; i < T; i++) cout << A[i] << endl;
    return 0;
}


/*
//駅間距離 旅人
#include <iostream>
using namespace std;
 
long long N, A[200009], S[200009];
long long M, B[200009];
 
int main() {
	// 入力
	cin >> N;
	for (int i = 1; i <= N - 1; i++) cin >> A[i];
	cin >> M;
	for (int i = 1; i <= M; i++) cin >> B[i];
	
	// 累積和をとる
	S[1] = 0;
	for (int i = 2; i <= N; i++) S[i] = S[i - 1] + A[i - 1];
	
	// 答えを求める
	long long Answer = 0;
	for (int i = 1; i <= M - 1; i++) {
		if (B[i] < B[i + 1]) {
			Answer += (S[B[i + 1]] - S[B[i]]);
		}
		else {
			Answer += (S[B[i]] - S[B[i + 1]]);
		}
	}
	
	// 出力
	cout << Answer << endl;
	return 0;
}


*/

/*
//降雪シミュレーション
int N, B[100009];
int Q, L[100009], R[100009], X[100009];

int main(){
    //入力・誤差の計算
    cin >> N >> Q;
    for (int i = 1; i <= Q; i++){
        cin >> L[i] >> R[i] >> X[i];
        B[L[i]] += X[i];
        B[R[i] + 1] -= X[i]; // 左辺 - 右辺
    }
    //出力
    for ( int i = 2; i <= N; i++){
        if (B[i] > 0) cout << "<";
        if (B[i] == 0) cout << "=";
        if (B[i] < 0) cout << ">";
    }
    cout << endl;
    return 0;
}
*/

/*
// 来場者数
int N, A[100009], B[100009];
int Q, L[100009], R[100009];

int main(){
    // 入力 累積和を求める
    cin >> N >> Q;
    for ( int i = 1; i <= N; i++) cin >> A[i];
    for ( int j = 1; j <= Q; j++) cin >> L[j] >> R[j];
    B[0] = 0;
    for ( int i = 1; i <= N; i++) B[i] = B[i - 1] + A[i];
    //答えの出力
    for (int j = 1; j <= Q; j++) cout << B[R[j]] - B[L[j] - 1] << endl;
    return 0;
}
*/