# # N種類の魔法

# 条件
# Xi秒 <= S秒
# Yi   >=  D

N, S, D = map(int, input().split())
X = list(map(int, input().split()))
Y = list(map(int, input().split()))

for i in range(N):
    if X[i] <= S and Y[i] >= D:
        print("Yes")
    else:
        print("No")