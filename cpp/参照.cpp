#include <bits/stdc++.h>
using namespace std;

//九九の採点

//参照渡しを用いて、呼び出し側の変数の値を変更する
void saiten(/* 呼び出し側に対応するように引数を書く */ vector<vector<int>> &A, int &correct_count, int &wrong_count){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(A.at(i).at(j) != (i + 1) * (j + 1)){
                //誤った値が書き込まれている場合
                A.at(i).at(j) = (i + 1) * (j + 1);
                wrong_count++;
            }
            else{
                //正しい値が書き込まれている場合
                correct_count++;
            }
        }
    }
}

int main(){
    // 回答を受け取る
    vector<vector<int>> A(9, vector<int>(9));
    for(int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> A.at(i).at(j);
        }
    }
    int correct_count = 0;
    int wrong_count = 0;

    //A, correct_count, wrong_countを参照渡し
    saiten(A, correct_count, wrong_count);

    // 正しく修正した表を出力
    for (int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << A.at(i).at(j);
            if (j < 8) cout << " ";
            else cout << endl;
        }
    }
    // 正しいマスの個数を出力
    cout << correct_count << endl;
    // 誤っているマスの個数を出力
    cout << wrong_count << endl;
}
/*
void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
    minimum = min(a, min(b, c)); // 最小値をminimumの参照先に代入
    maximum = max(a, max(b, c));
}

int main() {
    int minimum, maximum;
    min_and_max(3, 1, 5, minimum, maximum);
    cout << "minimum: " << minimum << endl;
    cout << "maximum: " << maximum << endl;
}


//範囲for文での参照
int main(){
    vector<int> a = {1, 3, 2, 5};
    for (int &x : a){
        x *= 2; 
    }
}
*/
/*
int g(int &x){
    x = x * 2;
    return x;
}

int main(){
    int a = 3;
    int b = g(a);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

int f(int x){
        x = x * 2;
        return x;
    }
int main(){
        int a = 3;
        int b = f(a);

        cout << a << endl;
        cout << b << endl;
}

int main(){
    int a = 3;
    int &b = a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    b = 5;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

*/