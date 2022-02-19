/*
再帰呼び出し：ある関数の中で同じ関数を呼び出すこと
再帰関数：再帰を行うような関数
*/
#include <bits/stdc++.h>
using namespace std;

//再帰関数　例題
// childrenは組織の関係を表す２次元配列（参照渡し）
int complete_time(vector<vector<int>> &children, int x) {
    //ベースケース
    if(children.at(x).size() ==0){
        return 0; 
    }
    int max_receive_time = 0;
    // x番の組織の子組織についてループ
    for(int c : children.at(x)) {
        // (子組織 c のもとに揃った時刻 ＋ 1)の時刻にcからの報告書を受け取る
        int receive_time = complete_time(children, c) + 1;
        //受け取った時刻の最大値＝揃った時刻であるため、最大値を求める
        max_receive_time = max(max_receive_time, receive_time);
    }
    return max_receive_time;
}

int main(){
    int N;
    cin >> N;

    vector<int> p(N); //各組織の親組織を示す配列
    p.at(0) = -1; //0番組織の親組織は存在しないので−1を入れておく
    for(int i = 1; i < N; i++){
        cin >> p.at(i);
    }

    // 組織の関係から２次元配列をつくる
    vector<vector<int>> children(N); //ある組織の子組織の番号一覧 // N*0の２次元配列
    for(int i = 1; i < N; i++){
        int parent = p.at(i); //i番の組織の番号
        children.at(parent).push_back(i); //parentの子組織一覧にi番を追加
    }
    // 0番の組織のもとに報告書が揃う時刻を求める
    cout << complete_time(children, 0) << endl;
}

/*
0からnまでの総和を計算する関数
int sum(int n){
    if(n == 0){
        return 0;
    }
    // sum関数の中でsum関数を呼び出している
    int s = sum(n-1);
    return s + n;
}

int main(){
    cout << sum(1) << endl;
    cout << sum(2) << endl;
    cout << sum(10) << endl;
}
*/


/*AからBまでの総和を求める関数:sum range
int sum_range(int a, int b){
    //ベースケース
    if(a == b){
        return a;
    }
    //再帰ステップ
    return sum_range(a, b-1) + b; // a~bの総和 = a~(b-1)の総和 + b
}
int main(){
    cout << sum_range(0,4) << endl;
    cout << sum_range(5,8) << endl;
}
*/

/*配列の要素の総和

//補助関数
// dataのi番目以降の要素の総和を計算する
int array_sum_from_i(vector<int> &data, int i){
    //ベースケース
    if(i == data.size()){
        return 0; //対象の要素がないので総和は0
    }
    //再帰ステップ
    int s = array_sum_from_i(data, i + 1); // i+1番目以降の要素の総和
    return data.at(i) + s;
}

// dataのすべての要素の総和を計算する
int array_sum(vector<int> &data){
    return array_sum_from_i(data, 0);
}

int main(){
    vector<int> a = {0, 3, 9, 1, 5};
    cout << array_sum(a) << endl;
}
*/

/*
// Nが素数であるかを判定する関数 is_prime

// i ~ N-1 の範囲にNの約数が存在するか
bool has_divisor(int N, int i){
    //ベースケース
    if(i == N){
        //対象となる整数がないのでfalse
        return false;
    }
    //ベースケース2
    if(N % i == 0){
        //iはNの約数なので、i ~ N-1の範囲に約数が存在する
        return true;
    }
    return has_divisor(N, i + 1);
}

bool is_prime(int N){
    if (N==1){
        return false;
    }
    else if (N ==2) {
        return true;
    }
    else {
        // 2~(N-1)の範囲に約数がなければ、Nは素数
        return !has_divisor(N, 2);
    }
}

int main(){
    cout << is_prime(1) << endl;
    cout << is_prime(2) << endl;
    cout << is_prime(13) << endl;
}
*/

/*
//配列の操作
//dataのi番目以降の要素を逆順にした配列を返す
vector<int> reverse_array_from_i(vector<int> &data, int i) {
    //ベースケース
    if(i == data.size()){
        vector<int> empty_array(0);
        return empty_array;
    }

    //再帰ステップ
    vector<int> tmp = reverse_array_from_i(data, i + 1);
    tmp.push_back(data.at(i));
    return tmp;
}

// 配列を逆順にしたものを返す
vector<int> reverse_array(vector<int> &data) {
    return reverse_array_from_i(data, 0);
}

int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = reverse_array(a);
    for (int i = 0; i < b.size(); i++){
        cout << b.at(i) << endl;
    }
}
*/