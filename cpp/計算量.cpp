#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<vector<int>> table(N, vector<int>(N));
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            table.at(i).at(j) = (i + 1) * ( j + 1);
        }
    }

    //出力
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << table.at(i).at(j);
            if ( j != N -1 ){
                cout << " ";
            }
            else{
                cout << endl;
            }
        }
    }
}