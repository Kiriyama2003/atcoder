a = list(map(int,input().split))
sort(a)
if((a[0]==a[1] and a[2]==a[3] and a[0]!=a[2]) or (a[0]==a[1] and a[1]==a[2] and a[2]!=a[3]) or (a[0]!=a[1] and a[1]==a[2] and a[2]!=a[3])) print("Yes")
else print("No")
