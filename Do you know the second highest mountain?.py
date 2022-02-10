# 入力を受け取る
N = int(input())

# 山の高さ、名前を格納するリストを作る
mountains = []

# # ここからfor文で一行ずつS,Tの受け取りを行う
# Sは文字列、Tは整数となるが、まず文字列としてS,Tを受け取り、
# Tを整数=intに変換すればいい。
# そして[山の高さ、名前]をmountainsに入れ、二次元配列を作る

for i in range(N):
    S,T = map(str, input().split())
    T = int(T)
    mountains.append([T,S])

# 格納ができたら山の高さが高い順に並べ替える
mountains.sort(reverse=True)

print(mountains[1][1])