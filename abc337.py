#int型変数
N, M = map(int, input().split())

# リストd[M+1] = [1,1,1,1,1, ... ,1,1]
d = [1 for i in range(M + 1)]

#N回の入力
for _ in range(N):  #Nを含まない, 0~N-1
    L, R = map(int, input().split())
    d[R] = max(d[R], L + 1)

for r in range(1, M + 1):  #r = 1~M
    d[r] = max(d[r], d[r - 1])


ans = 0
for r in range(1, M + 1):
    ans += r - d[r] + 1


print(ans)