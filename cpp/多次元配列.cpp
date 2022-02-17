#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M ;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++){
        cin >> A.at(i) >> B.at(i);
    }

    // N * Nのchar型の２次元配列のすべての要素を'-'で初期化
    vector<vector<char>> table(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i++) {
        // 1~N → 0~N-1に変換
        A.at(i)--; B.at(i)--;
        table.at(A.at(i)).at(B.at(i)) = 'o';
        table.at(B.at(i)).at(A.at(i)) = 'x';
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << table.at(i).at(j);
            if(j == N-1){
                cout << endl;
            }
            else {
                cout << ""; //行末でないなら空白を出力
            }
        }
    }
}

/*
int main(){
    int N;
    cin >> N;
    // N * ( 3 * 3)要素の配列を宣言
    vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));

    //入力
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                cin >> data.at(i).at(j).at(k);
            }
        }
    }

    // '●'の数を数える
    int count = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                if ( data.at(i).at(j).at(k) == 'o'){
                    count++;
                }
            }
        }
    }
    cout << count << endl;
}



int main(){
    //int型の２次元配列（3*4)の宣言
    vector<vector<int>> data(3, vector<int>(4));

    //入力（２重ループ）
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            //２次元配列の要素へのアクセス方法。上から何番目、左から何番目
            cin >> data.at(i).at(j);
        }
    }

    //0の個数を数える
    int count = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if( data.at(i).at(j) == 0){
                count++;
            }
        }
    }
    cout << count << endl;
}
*/