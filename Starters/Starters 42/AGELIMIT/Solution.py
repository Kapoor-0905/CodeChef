t = int(input())
for i in range(t):
    x,y,a = input().split()
    if(int(a)>=int(x) and int(a)<int(y)):
        print("YES")
    else:
        print("NO")
