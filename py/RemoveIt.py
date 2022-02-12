# 長さ N の整数列 A と整数 X が与えられます。
# A から X と等しい要素を全て取り除き、残った要素をそのままの順序で並べた数列 A′
# を出力してください。

N,X = map(int, input().split())
A = list(map(int, input().split()))
         
ans = []
         
for i in range(N):
  if A[i] != X:
    ans.append(A[i])
print(*ans)