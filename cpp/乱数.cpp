#include <bits/stdc++.h>
using namespace std;

int main(void){
 
  int i;
  double num;
 
  /* 乱数の種を初期化 */
  srand(time(NULL));
 
  /* 0 〜 1 の乱数を生成・出力 */
  for(i=0;i<3;i++){
    num = (double)rand()/RAND_MAX;
    printf("%f\n", num);
  }
 
  return 0;
}
