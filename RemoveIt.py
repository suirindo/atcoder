# 長さ N の整数列 A と整数 X が与えられます。
# A から X と等しい要素を全て取り除き、残った要素をそのままの順序で並べた数列 A′
# を出力してください。

# N,S,D = map(int, input().split())

# for i in range(N):
#     X, Y = map(int, input().split())
#     if X < S and D < Y:
#         print("Yes")
#         exit()

# print("No")


N, S, D = map(int, input().split())
for _ in range(N):
  X, Y = map(int, input().split())
  if X < S and Y > D:
    print('Yes')
    break
else:
  print('No')