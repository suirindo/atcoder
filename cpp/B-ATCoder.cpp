#include <bits/stdc++.h>
using namespace std;
#define repi(i,a,b) for(int i=int(a);i<int(b);++i)
template <typename T>
bool chmax(T &a, const T& b) {
  if (a < b) {
    a = b;  // aをbで更新
    return true;
  }
  return false;
}

string S;
int N;
string T = "ATCG";

int main(){
    cin >> S;
    N = S.length();

    int ans = 0;
    repi(L,0,N) repi(R,L,N){
        int ok = 1;
        repi(x, L, R + 1) if (T.find(S[x]) == string::npos) ok = 0;
        if (ok) chmax(ans, R - L + 1);
    }
    cout << ans << endl;
}



/*
// ATGC の文字数

bool is_ATGC(char c)
{
    switch (c) {
        case 'A':
        case 'T':
        case 'G':
        case 'C':
            return true;
    }
    return false;
}

bool is_ATGC(const string &S, int i ,int j)
{
    for (int k = i; k <= j; ++k){
        if (!is_ATGC(S.at(k)))
            return false;
    }
    return true;
}

int main(){
    string S;
    cin >> S;
    int N = S.size();
    int max_len = 0;
    for (int i = 0; i < N; ++i){
        for (int j = i; j < N; ++j){
            if (!is_ATGC(S, i, j))
                continue;
            int len = j - i + 1;
            if (max_len < len)
                max_len = len;
        }
    }
    cout << max_len << endl;
}

*/