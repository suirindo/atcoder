#include <bits/stdc++.h>
using namespace std;

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