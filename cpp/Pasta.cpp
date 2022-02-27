#include <bits/stdc++.h>
using namespace std;

//解法2
int main(){
    int n , m;
    map<int, int>mp;
    int x;

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> x;
        mp[x]++;
    }

    for (int i = 0; i < m; i++){
        cin >> x;
        if (mp[x] == 0){
            cout << "No" << endl;
            return 0;
        }
        mp[x]--;
    }
    cout << "Yes" << endl;
    return 0;
}


/*
// 解法1
int main(){
    int n, m;
    int a[1000];
    int b;
    bool used[1000];
    bool found, success;

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        used[i] = false;
    }

    success = true;
    for (int i = 0; i < m; i++){
        cin >> b;
        found = false;
        for(int j = 0; j < n; j++){
            if((a[j] == b) && (!used[j])) {
                used[j]  = true;
                found = true;
                break;
            }
        }
        if(!found)success = false;
    }
    if(success) cout << "Yes" << false;
    else cout << "No" << endl;
    return 0;
}

*/