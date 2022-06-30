t = int(input())
for i in range(t):
    b = int(input())
    c = b//100
    d = b - (100*c)
    e = c + d
    if e <= 10:
        print(e)
    else:
        print(-1)
