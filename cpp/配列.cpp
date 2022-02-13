#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    //人数
    cin >> N;

    //N要素の配列
    vector<int> A(N);

    //for文で入力。点数データを受け取る
    for (int i = 0; i < N; i++){
        cin >> A.at(i);
    }

    //合計点 初期化=0
    int sum = 0;

    //合計点を計算
    for(int i = 0; i < N; i++){
        sum += A.at(i);
    }

    //平均点
    int mean = sum / N;

    //平均点から何点離れているかを計算して出力
    for (int i = 0; i < N; i++) {
        if (A.at(i) > mean){
            cout << A.at(i) - mean << endl;
        }
        else {
            cout << mean - A.at(i) << endl;
        }
        // int result = 0;
        // result = A.at(i) - mean;
        // if( result < 0){
        //     cout << mean - A.at(i) << endl;
        // }
        // else {
        //     cout << A.at(i) - mean << endl;
        // }

    }





    //for文を使った入力
    //入力を配列変数で受け取る場合、for文を使って入力処理を書くのが一般的です
    
    //100要素の配列で初期化
    // vector<int> vec(100);
    //100個の入力を受けとる
    // for (int i = 0; i < 100; i++){
    //     cin >> vec.at(i);
    // }

    //配列とfor文を組み合わせると、大量のデータを扱うプログラムを書くことができる





    //配列と変数
    // vector<int> vec(3);

    // cin >> vec.at(0) >> vec.at(1) >> vec.at(2);

    // cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;



    // //文字列
    // string str; //文字列変数を宣言
    // str = "abcd"; // 'a','b','c','d' という文字{char}の列を代入

    // cout << str.at(0) << endl;

    // cout << str.size() << endl;

    // // 配列
    // vector<int> vec; //int型の配列変数vecを宣言
    // vec = { 25, 100, 64 };

    // cout << vec.at(0) << endl;
    // cout << vec.size() << endl;
}