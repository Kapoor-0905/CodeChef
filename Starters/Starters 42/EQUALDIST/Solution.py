t = int(input())
for i in range(t):
    a,b = input().split()
    if((int(a)+int(b))%2==0):
        print("YES")
    else:
        print("NO")
