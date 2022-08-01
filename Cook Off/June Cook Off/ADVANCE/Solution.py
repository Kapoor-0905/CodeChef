t = int(input())
for i in range(t):
    x,y = input().split()
    if(int(y)>=int(x) and int(y)<=int(x)+200):
        print("YES")
    else:
        print("NO")
