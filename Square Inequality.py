# # pattern1
# # 数字が1つ
# # N = int(input())

# # 2
# # 数字が2つ以上で別々に受け取り
# # A, B = map(int, input().split())

# # 3
# # 文字列が1つ
# # S = input()

# # 4
# # 文字列が2つ以上で別々に受け取り
# # S,T = map(str, input().split())

# # 5
# # リストで受け取り
# # A = list(map(int, input().split())


# # 実装
# # 入力を受け取る
# # A,B,C = map(int,input().split())
# # これで、ABCに入力されたそれぞれの値を受け取ることができる
# # あとは、問題文の条件を満たしているか？を判定して出力するだけ。

A,B,C = map(int, input().split())

if A**2 + B**2 < C**2:
    print("Yes")
else:
    print("No")