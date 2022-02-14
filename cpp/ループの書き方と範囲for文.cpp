#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++){
        cin >> data.at(i);
    }
    bool ans = false; // 初めはfalseにしておき、条件を満たすときにtrueとなるようにする

    for ( int i = 0; i < 4; i++){
        if (data.at(i) == data.at(i + 1)) {
            ans = true;
        }
    }
        if(ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
};

/*
int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i++){
        cin >> data.at(i);
    }

    if (data.at(0) == data.at(1)){
        cout << "YES" << endl;
    }
    else if (data.at(1) == data.at(2))
    {
        cout << "YES" << endl;
    }
    else if (data.at(2) == data.at(3))
    {
        cout << "YES" << endl;
    }
    else if (data.at(3) == data.at(4))
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
};


// int main() {
//     int a;
//     cin >> a;
//     vector<int> data(5);
//     int answer = 0;
    
//     for (int i = 0; i < 5; i++){
//         cin >> data.at(i);
//         if (data.at(i) == a) {
//         answer++;
//     }

    // int answer = 0;
    // if (data.at(0) == a) {
    //     answer++;
    // }
    // if (data.at(1) == a) {
    //     answer++;
    // }
    // if (data.at(2) == a) {
    //     answer++;
    // }
    // if (data.at(3) == a) {
    //     answer++;
    // }
    // if (data.at(4) == a) {
    //     answer++;
    }
    cout << answer << endl;
};

// 範囲for文
//配列のすべての要素を出力する


int main(){
    vector<int> a = {1, 3, 2, 5};
    for (int i = 0; i < a.size(); i++) {
        cout << a.at(i) << endl;
    }
}
↓ 書き換え

int main() {
    vector<int> a = {1, 3, 2, 5,10};
    for (int x : a ) {
        cout << x << endl;
    }
}

int main(){
    vector <int> a = {1,3,2,5};
    for (int x : a){
        if ( x == 1){
            continue;
        }

        if(x == 5){
            break;
        }

        cout << x << endl;
    }
}

int main(){
    string str = "hello";
    for ( char c : str) {
        if (c == 'l'){
            c = 'L';
        }
        cout << c;
    }
    cout << end;
}

while文が適しているケース

int main(){
    int N;
    cin >> N;

    int count = 0;
    while ( N >0) {
        // 2で割り切れなければループを抜ける
        if ( N % 2 > 0) {
            break;
        }
        N = N / 2;
        count++;
    }
    cout << count << endl;
}



*/