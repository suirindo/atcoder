#実装
#judge_ten「10進数表示で7を含むか」 judge_eight「８進数表示で7を含むか」を判定する関数を作る

#judge_ten 引数xを10進数で表した場合に、7を含むならtrue、そうでないならfalseを返す

def judge_ten(x):
    x=str(x)
    if "7" in x:
        return True
    else:
        return False
#1:xを数値として受け取る
#2:xを文字列に変換（７を含むか？の判定は文字列の方が簡単に行えるため）

def judge_eight(x):
    s="" #xの8進数表示をsとする。最初は空文字列にしておく
    #1: 8で割った余を一番上の桁につける
    #2: 8で割った商に置き換える
    #3: これを0になるまでくりかえす
    while x>0:
        s=str(x%8) + s
        x//=8
    # sが7を含むか判定
    if "7" in s:
        return True
    else:
        return False

# 入力を受け取る
N=int(input())

# 10進数でも8進数でも7を含まない数をカウントする変数ansをつくる
ans=0
# 1~Nについて条件を満たすか判定し、条件を満たす場合はansに＋１カウントする
for i in range(1, N+1):
    if judge_ten(i) == False and judge_eight(i) == False:
        ans+=1
print(ans)


