#include <bits/stdc++.h>
using namespace std;

int N, A[200009];

int main() {
    //入力
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    //選択ソート
    for (int i = 1; i <= N - 1; i++){
        int Min = 1, Min_Value = A[i];
        for (int j = i + 1; j <= N; j++ ){
            if (A[j] < Min_Value){
                Min = j; // Minは最小値のインデックス(1 ~ N)
                Min_Value = A[j];
            }
        }
        swap(A[i], A[Min]);
    }
    for(int i = 1; i <= N; i++) cout << A[i] << endl;
    return 0;
}